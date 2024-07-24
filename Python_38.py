```
def decode_cyclic():
    s = input("Enter the string: ")
    n = len(s)
    result = ""
    i = 0
    while i < n:
        group = s[i:i+3]
        if len(group) == 3 and (group[0].lower() == 'a' and group[1].lower() == 'b' and group[2].lower() == 'c'):
            result += group[0] + group[1] + group[2]
        elif len(group) > 1:
            result += group[-1] + group[-2] + group[:-3]
        else:
            result += group
        i = (i+3)%n
    return result

print(decode_cyclic())