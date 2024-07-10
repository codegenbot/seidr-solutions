```
def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text): 
        i = text.find(target, i)
        if i == -1: 
            break
        result.append(i)
        i += len(target)