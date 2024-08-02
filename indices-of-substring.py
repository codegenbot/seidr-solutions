Here is the Python solution for the problem:

```
def indices_of_substring(text):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(input(), start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices