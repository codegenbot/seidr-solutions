```
def get_indices(text, target):
    return [i for i in range(1, len(text)) if text[i-1:i+len(target)] == target]
```