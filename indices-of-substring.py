
```
def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:] == target:
            indices.append(i)
    return indices
```