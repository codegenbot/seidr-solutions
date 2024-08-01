def decode_cyclic(s: str):
    result = ""
    i = 0
    for char in s:
        if i % 3 == 0 and i != 0:
            result += s[i - 1] + char
        else:
            result += char
        i += 1
    return result