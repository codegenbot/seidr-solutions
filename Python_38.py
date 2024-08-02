def encode_cyclic(s: str):
    result = ""
    for char in s:
        if result:
            result = char + result
        else:
            result = char
    while len(result) > 1 and result[0] == "1":
        result = "0" + result[1:] + result[0]
    return result