def decode_cyclic(s):
    if not isinstance(s, str):
        return "Invalid input. Please provide a string."
    result = ""
    for i in range(0, len(s), 3):
        group = s[i:i+3]
        if len(group) == 1:
            result += group[0] * 2
        elif len(group) == 2:
            result += group[0] + group[1]
        else:  
            result += group[0] * 2  
    return result