def decode_cyclic():
    """ """
    s = input("Enter the string: ")
    result = ""
    i = 0
    group = ""
    while i < len(s):
        if i + 2 <= len(s):
            group = s[i : i + 2] + s[i]
        else:
            group = s[i:]
        if len(group) == 3:
            result += group[1] + group[0] + group[2]
        elif len(group) == 2:
            result += group[1] + group[0]
        else:
            result += group
        i += 3
    return result