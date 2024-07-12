def decode_cyclic() -> str:
    s = input("Enter the string: ")
    result = ""
    if len(s) >= 3:
        while len(s) >= 3:
            group = s[:3]
            result += group[1] + group[0] + group[2]
            s = s[3:]
        if s:
            result += s
    else:
        result = s
    return result