def decode_cyclic(s: str):
    s = input()
    result = ""
    while len(s):
        if len(s) >= 3:
            group = s[:3]
            if len(group) == 3 and group[0] == group[2]:
                result += group[1]
                s = s[3:]
            else:
                for i in range(len(group)):
                    if i != 0 and i != len(group)-1:
                        result += group[i]
                s = s[3:]
        else:
            result += s[0]
            s = s[1:]
    return result