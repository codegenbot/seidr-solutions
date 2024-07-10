```
def indices_of_substring(text, target):
    if target in text:
        result = [0] + [i for i in range(1, len(text) - len(target) + 1) if text[i:i+len(target)] == target]
    else:
        result = []
    return result