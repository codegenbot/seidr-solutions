def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos < len(text):
        pos = text.find(target, pos) + (1 if pos == -1 else 0)
        if pos == -1:
            break
        result.append(pos)  
        pos += 1

    return result