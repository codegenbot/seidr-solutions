```
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text.startswith(target):
            result.append(0)
        elif i + len(target) <= len(text) and text[i:].startswith(target):
            result.append(i)
    return result