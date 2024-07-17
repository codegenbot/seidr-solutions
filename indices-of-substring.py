Here is the completed code:

```
def indices_of_substring(text):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(input(), start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices