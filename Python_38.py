def decode_cyclic(s: str):
    result = ""
    for char in s:
        if len(result) % 3 == 0:
            result += char
        else:
            result = char + result[1:] + result[0] + result[2:]
    return result