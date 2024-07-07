```
def indices_of_substring(text, target):
    return [text.find(target) + i * len(target) for i in range((len(text) - len(target)) // len(target) + 1)]