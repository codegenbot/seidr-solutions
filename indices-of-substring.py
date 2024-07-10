```
def indices_of_substring(text, target):
    result = []
    if text.startswith(target):
        result.append(0)
    [result.extend(range(i, i+len(target))) for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target]
    return result