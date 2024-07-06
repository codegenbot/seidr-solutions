```Python
def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        temp = s[i:i+3]
        result += temp[1] + temp[0]
    return result