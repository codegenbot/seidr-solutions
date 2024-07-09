```
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[:len(target)] == target:
            result.append(0)
        elif text[i : i + len(target)] == target:
            result.append(i)
    return result