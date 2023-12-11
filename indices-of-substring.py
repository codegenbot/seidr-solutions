
```
def indices_of_substring(text, target):
    # Calculate the maximum index at which the target string can appear in the text string
    max_index = len(text) - len(target) + 1
    return [i for i in range(max_index) if text[i:i+len(target)] == target]
```