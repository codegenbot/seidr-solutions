def encode_cyclic(s: str):
    result = ""
    for char in s:
        if char == "1":
            result = char + result
        else:
            result = char + result[0] + "0" if len(result) > 0 else "0"
    return result