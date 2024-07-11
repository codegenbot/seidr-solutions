def decode_cyclic(encoded_str):
    decoded_str = ""
    n = len(encoded_str) // 2
    for i in range(0, len(encoded_str), n):
        bits = encoded_str[i : i + n]
        if bits[0] == "1":
            decoded_str += bits[1:].zfill(n)[::-1]
        else:
            decoded_str += bits[1:][::-1].ljust(n, "0")
    return decoded_str