```
def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos += 1
        if text.find(target, pos) != -1:
            result.append(pos + len(target) - len(target)) 
        else:
            break
    return result