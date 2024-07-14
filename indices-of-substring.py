```
def find_indices(text, target):
    result = []
    i = 0
    while True:
        pos = text.lower().find(target.lower(), i)
        if pos == -1:
            break
        result.append(pos) 
        i = pos + len(target)  
    return result