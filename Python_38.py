def decode_cyclic(encoded_str):
    decoded_str = ""
    n = len(encoded_str) // 2
    if len(encoded_str) % 2 != 0:
        n += 1
        if encoded_str[:1] == "1":
            encoded_str = encoded_str[1:]
        else:
            encoded_str = "0" + encoded_str[:-1]
    for i in range(0, len(encoded_str), n):
        bits = encoded_str[i : i + n]
        if bits[0] == "1":
            decoded_str += bits[1:].zfill(n)[::-1]
        else:
            decoded_str += bits[1:][::-1].ljust(n, "0")
    return decoded_str