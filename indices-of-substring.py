def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)  
        end_idx = text.find(target, pos + len(target))
        if end_idx != -1:
            result.append(end_idx)  
        else:
            result.append(len(text))  
        pos += len(target)

    return result