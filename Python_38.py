```
def decode_cyclic(s):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    i = 0
    while i < len(s):
        if len(s[i:]) >= 3:
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 1:
            if result and result[-1] == group[0]:
                result += group[0] * 2
            else:
                result += group[0]
        elif len(group) == 2: 
            result = group[1] + result  
        else:  
            if i > 0 and s[i-1] == group[0]:
                result += group[0] * 2
            else:
                result += group[0]
        i += len(group)
    return result