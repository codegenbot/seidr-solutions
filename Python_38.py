def decode_cyclic(s: str):
    s = s * (3 - len(s) % 3)
    result = ""
    for char in s:
        if char not in result:
            result += char
    return result