```
def indices_of_substring(text, target):
    return [i for i, _ in enumerate(text) if text[i:i+len(target)].endswith(target)]