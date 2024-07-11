```
def decode_cyclic(encoded_str: str, key: int) -> str:
    encoded_bytes = bytes(encoded_str.encode(), 'utf-8')
    decoded_str = ""
    n = len(encoded_str) // 2
    while n % 2 != 0:
        n //= 2
    if len(encoded_str) % n != 0:
        if encoded_str[:n].encode().hex() == "1" * (n // 4) and key % 2 != 0:
            encoded_bytes = bytes.fromhex("0" + encoded_bytes.hex())
        elif encoded_str[:n].encode().hex() != "1" * (n // 4) and key % 2 == 0:
            encoded_bytes = bytes.fromhex("1" + encoded_bytes.hex())
    for i in range(0, len(encoded_bytes), n):
        bits = encoded_bytes[i:i+n]
        if bits[0].hex() == "1":
            decoded_str += bits[1:].hex()[::-1].ljust(n*2,"0").decode()
        else:
            decoded_str += bits[1:].hex()[::-1].ljust(n*2,"0").decode()
    for i in range(0, len(decoded_str), n):
        if decoded_str[i:i+n] == encoded_str[:key]:
            return decoded_str[i+n:]
    return decoded_str

input_string = input("Enter the encoded string: ")
key = int(input("Enter the key: "))
print(decode_cyclic(input_string, key))