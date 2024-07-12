def decode_cyclic():
    s = input("Enter the string: ")
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if len(group) == 2:
            result += group[1] + group[0]
        elif len(group) >= 3:
            result += group[2] + group[1] + group[0]
        else:
            result += group
        i += 3
    return result