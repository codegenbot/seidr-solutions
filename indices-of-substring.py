Here is the Python solution for the problem:

```
def indices_of_substring(text):
    result = [0]
    start = 0
    while True:
        start += len(result[-1])
        if start > len(text):
            break
        pos = text.find(text[result[-1]:], start)
        if pos != -1:
            result.append(pos + len(result[-1]))
        else:
            break
    return result