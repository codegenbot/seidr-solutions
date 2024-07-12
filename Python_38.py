```
def decode_cyclic() -> str:
    s = input("Enter the string: ")
    
    if not isinstance(s, str):
        return "Invalid Input"

    result = ""
    if len(s) < 3:
        return s

    if len(s) % 2 == 0:
        while len(s) >= 4:
            group = s[:min(4, len(s))]
            result += group[1] + group[0] + group[-2] + group[-1]
            s = s[len(group):]
        if s:
            result += s
    else:
        while len(s) >= 3:
            group = s[:min(3, len(s))]
            result += group[1] + group[0] + group[-1]
            s = s[len(group):]
        if s:
            result += s
    return result

print(decode_cyclic())