def decode_cyclic(s: str):
    result = ""
    for char in set(s):
        count = s.count(char)
        if count > 1:
            result += char * (count // 2) + (char if count % 2 else "")
    return result