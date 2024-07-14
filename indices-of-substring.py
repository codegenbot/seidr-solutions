def find_indices(text, target):
    result = []
    text_lower = text.lower()
    target_lower = target.lower()
    i = 0
    while True:
        pos = text_lower.find(target_lower, i)
        if pos == -1:
            break
        result.append(pos) 
        i = 0  
    return result