```
def indices_of_substring(text):
    target = text.strip()
    result = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i:i+len(target)] == target:
            result.append(i)
        i += 1
    return result