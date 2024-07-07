```
def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target) and text[i:i+len(target)] == target]