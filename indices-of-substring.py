Here is the Python solution for the problem:

```
def indices_of_substring(text):
    target_indices = []
    start_index = 0
    while start_index < len(text):
        index = text.find(text[start_index:], start_index)
        if index == -1:
            break
        target_indices.append(index)
        start_index = index + 1
    return target_indices