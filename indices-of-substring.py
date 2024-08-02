Here is the Python solution for the problem:

```
def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(pos)
        index += pos + 1
    return result