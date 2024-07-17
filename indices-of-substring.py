```
def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text) - len(target) + 1:
        if text[start:start+len(target)] == target:
            result.append(start)
            start += 1
        else:
            start += 1
    return result