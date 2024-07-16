```
def indices_of_substring(text, target):
    indices = []
    target_len = len(target)
    for i in range(len(text)):
        if text[i:i+target_len] == target:
            indices.append(str(i))
    return [int(x) for x in set(indices)]