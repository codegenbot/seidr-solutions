```
def decode_cyclic():
    s = input("Enter the string: ")
    result = ""
    i = 0
    group = False  
    while i < len(s):
        if i + 2 <= len(s):  
            group_str = s[i : i + 2] + s[i]
        else:
            group_str = s[i:]
        if len(group_str) == 3:
            result += group_str[1] + group_str[0] + group_str[2]
        elif len(group_str) == 2:  
            result += group_str[1] + group_str[0]
        else:
            result += group_str
        i += 3
    return result