Here is the solution:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[-1]:
            result += s[i]
            i += 1
        else:
            group = s[i:i+3]
            if i != 0:
                result += s[0]
            result += group[2:]
            i += 3
    return result