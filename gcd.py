```
def find_indices(text, target):
    result = []
    target_len = len(target)
    for i in range(len(text)):
        if text[i:i+target_len] == target:
            result.append(i)
    return result