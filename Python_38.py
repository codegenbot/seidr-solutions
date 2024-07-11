def decode_cyclic():
    s = input("Enter the cyclic string: ")
    result = ""
    i = 0
    while i < len(s):
        group = s[i:] if i+2 <= len(s) else s[i:]
        if len(group) >= 3:
            result += f"{group[1]}{group[0]}{group[2]}"
        elif len(group) == 2:
            result += f"{group[1]}{group[0]}z"
        else:
            result += group
        i += 1
    return result

print(decode_cyclic())