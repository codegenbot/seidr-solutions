def decode_cyclic(encoded_str: str, key: int) -> str:
    encoded_bytes = bytes(encoded_str.encode(), 'utf-8')
    decoded_str = ""
    n = len(encoded_bytes) // 8
    while n % 2 != 0:
        n //= 2
    for i in range(0, len(encoded_bytes), n):
        bits = encoded_bytes[i:i+n]
        if bits[0] ^ key:
            decoded_str += ''.join(format(int.from_bytes(bits[1:], 'big'), '08b')[::-1].ljust(n*8,'0').encode())
        else:
            decoded_str += ''.join(format(int.from_bytes(bits[1:], 'big'), '08b')[::-1].ljust(n*8,'0').encode())
    return decoded_str

input_string = input("Enter the encoded string: ")
key = int(input("Enter the key: "))
print(decode_cyclic(input_string, key))