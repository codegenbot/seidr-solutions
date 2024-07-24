```
def indices_of_substring(text, target):
    result = []
    i = text.find(target)
    while i != -1:
        result.append(i)
        i = text.find(target, i + 1)
    return result