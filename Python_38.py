def encode_cyclic(s: str):
    result = ""
    for char in s:
        if result == "":
            result += char
        else:
            result = char + result[:1] + "0" + result[1:]
    return result