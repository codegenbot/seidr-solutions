def encode_cyclic(s: str):
    result = ""
    for char in s:
        if char == "1":
            result = char + "0" + result
        else:
            result = char + result
    return result