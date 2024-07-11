```
def indices_of_substring(text, target):
    return [
        i for i in range(0, len(text), 1) if text[i:i+len(target)] == target
    ]