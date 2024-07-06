def decode_cyclic(s: str):
    decoded = ""
    i = 0
    while i < len(s):
        if (i + 3) <= len(s):
            decoded += s[i : i + 2] + s[i]
        else:
            decoded += s[i:]
        i += 1
    return decoded