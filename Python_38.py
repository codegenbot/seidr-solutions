```
def decode_cyclic():
    s = input()
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if group[0] == group[1] and group[0] == group[2]:
            result += group[0]
            i += 2  
        else:
            result += group
        i += 3
    return result