def encode_cyclic(s: str):
    result = ""
    for char in s:
        if result == "":
            result += char
        else:
            result = char + result
    return result[1:] + result[0]