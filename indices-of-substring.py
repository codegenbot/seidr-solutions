def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos + len(target))
        if pos == -1:
            break
        result.append(pos)  
        pos = text.find(target, pos)

    return result