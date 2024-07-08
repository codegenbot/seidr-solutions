```
def indices_of_substring(text, target):
    result = []
    index = 0
    while True:
        index = text.find(target, index)
        if index == -1:
            break
        result.append(index)
        index = text.find(target, index + 1)  
    return result