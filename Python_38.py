def encode_cyclic(s: str):
    result = ""
    for char in s:
        if char == "1":
            result = char + result
        else:
            result = char + result[0] + "0" + result[1:]
    return result