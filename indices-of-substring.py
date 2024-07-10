```
def indices_of_substring(text, target):
    result = [i for i in range(len(text)+1) if text[:i+len(target)] == target]
    return result