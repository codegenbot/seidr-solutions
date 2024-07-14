def find_indices(text, target):
    result = []
    i = 0
    while True:
        pos = text.lower().find(target.lower(), i)
        if pos == -1:
            break
        result.append(pos + 1) 
        i = pos + 1  
    return result