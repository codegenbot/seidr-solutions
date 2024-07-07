Here is the Python solution for the problem:

```
def indices_of_substring(text):
    result = []
    start_index = 0
    while start_index < len(text):
        index = text.find(input(), start_index)
        if index == -1:
            break
        result.append(index)
        start_index = index + 1
    return result