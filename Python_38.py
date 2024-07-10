Here is the solution:

def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 2):
        if i + 1 < len(s) and i + 3 <= len(s):
            result += s[i:i+3][1]
        else:
            result += s[i:i+3]
    return result