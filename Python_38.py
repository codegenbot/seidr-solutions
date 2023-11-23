def decode_cyclic(s: str):
    decoded_string = ''
    for i in range(0, len(s), 3):
        decoded_string += s[i+2] + s[i] + s[i+1]
    return decoded_string