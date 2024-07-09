Here is the solution:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if len(s[i:]) >= 3:
            for _ in range(2):
                result += s[i]
                i += 1
        else:
            result += s[i:]
            break
    return result