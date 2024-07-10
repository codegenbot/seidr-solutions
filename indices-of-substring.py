```
def indices_of_substring(text, target):
    result = [i for i in range(len(text)) if text[i:i+len(target)] == target]
    return result