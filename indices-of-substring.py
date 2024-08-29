```
def indices_of_substring(text, target):
    result = []
    i = 0
    while i <= len(text) - len(target):
        if text[i:].startswith(target):
            result.append(i)
        i += 1
    return result