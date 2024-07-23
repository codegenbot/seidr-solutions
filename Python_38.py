def decode_cyclic(s: str):
    decoded = ""
    for i in range(0, len(s), 3):
        if i + 2 < len(s):
            decoded += s[i+1] + s[i]
        else:
            decoded += s[i:]
    return decoded