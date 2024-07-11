def decode_cyclic(encoded_str: bytes, key: int) -> str:
    decoded_str = ""
    n = len(encoded_str) // 2
    while n % 2 != 0:
        n //= 2
    if len(encoded_str) % n != 0:
        if encoded_str[:n].hex() == "1" * (n // 4) and key % 2 != 0:
            encoded_str = bytes.fromhex("0" + encoded_str.hex())
        elif encoded_str[:n].hex() != "1" * (n // 4) and key % 2 == 0:
            encoded_str = bytes.fromhex("1" + encoded_str.hex())
    for i in range(0, len(encoded_str), n):
        bits = encoded_str[i : i + n]
        if bits[0].hex() == "1":
            decoded_str += bits[1:].hex()[::-1].ljust(n * 2, "0").decode()
        else:
            decoded_str += bits[1:].hex()[::-1].ljust(n * 2, "0").decode()
    return decoded_str

input_bytes = bytes(input("Enter the encoded string: "), 'utf-8')
key = int(input("Enter the key: "))
print(decode_cyclic(input_bytes, key))