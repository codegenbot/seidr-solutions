def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) % 3 == 0:
                result += group[1:]
            else:
                result += group[2] + group[0]
            group = ""
    if group:
        if not result or len(result) % 3 != 0: 
            if len(group) >= 2:  
                result += group[1:]  
            elif len(group) == 1:
                result += group[0] * ((len(result) // 3 + 1) * 3 - len(result))
            else:  
                result += group[1:] 
    return result