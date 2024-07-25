```Python
def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return s
    result = ""
    i = 0
    for c in s:
        if c.isalpha():
            if i % 3 == 1:
                result += c.upper()
            elif i % 3 == 2:
                result += c.lower()
            i += 1
        else:
            i -= 1
    return result