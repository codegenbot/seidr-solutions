```
def decode_cyclic(s: str):
    result = ""
    for char in set(s):
        count = s.count(char)
        if count > 1:
            for _ in range(count // 2):
                result += char
    return result