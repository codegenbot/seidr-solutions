def decode_cyclic(s: str):
    s = input()
    result = ""
    while len(s):
        if len(s) >= 3:
            group = s[:3]
            if len(group) > 1:
                result += group[1]
                for i in range(2):
                    if i < len(group) - 1:
                        result += group[0]
                    else:
                        break
            else:
                result += group[0]
            s = s[3:]
        else:
            result += s[0]
            s = s[1:]
    return result