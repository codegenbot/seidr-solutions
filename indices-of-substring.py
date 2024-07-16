```
def indices_of_substring(text, target):
    result = [text.index(target, i) for i in range(len(text)) if text.find(target, i) != -1]
    return result