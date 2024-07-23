def decode_cyclic(s: str):
    result = ""
    for char in s:
        count = s.count(char)
        if count % 2 != 0:
            result += char
    return result