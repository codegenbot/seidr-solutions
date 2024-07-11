```
def decode_cyclic(encoded_str):
    if len(encoded_str) % (len(encoded_str) // 2) != 0:
        return "Invalid input. Please ensure the length of the encoded string is a multiple of half its length."
    decoded_str = ""
    n = len(encoded_str) // 2
    while n % 2 != 0:
        n //= 2
    if len(encoded_str) % n != 0:
        prefix = "10" if encoded_str[:n] == "1" * n else "01"
        encoded_str = prefix + encoded_str
    for i in range(0, len(encoded_str), n):
        bits = encoded_str[i : i + n]
        if bits[0] == "1":
            decoded_str += bits[1:].zfill(n)[::-1]
        else:
            decoded_str += bits[1:][::-1].ljust(n, "0")
    return decoded_str