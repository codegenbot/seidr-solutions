def decode_cyclic(s: str):
    if len(s) == 0:
        return s
    last = s[0]
    result = ""
    for char in s:
        if char != last:
            result += char
        last = char
    return result