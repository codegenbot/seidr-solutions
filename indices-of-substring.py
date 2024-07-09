def indices_of_substring(text, target):
    result = []
    last_pos = 0
    while last_pos < len(text):
        pos = text.find(target, last_pos)
        if pos != -1:
            result.append(pos)
            last_pos = pos + len(target)  
        else:
            break
    return result