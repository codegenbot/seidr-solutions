```
def decode_cyclic() -> str:
    s = input("Enter the string: ")
    result = ""
    if len(s) == 0: 
        return result
    elif len(s) <= 2:
        if s[0] == s[-1]:
            return s[0]
        else:
            return s
    else:
        while len(s) >= 3:
            group = s[:min(3, len(s))]
            result += group[1] + group[0] + group[-1]
            s = s[len(group):]
        if s:
            result += s
    return result