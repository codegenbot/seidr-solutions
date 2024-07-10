```
def indices_of_substring(text, target):
    result = []
    last_index = 0
    while True:
        last_index = text.find(target, last_index)
        if last_index != -1:
            result.append(last_index)
            last_index += len(target)  
        else:
            break
    return result