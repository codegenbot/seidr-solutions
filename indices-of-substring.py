Here is the Python solution for the problem:

```
def indices_of_substring(text):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target=str(input()), start=i)
        if pos != -1:
            result.append(pos)
            i = pos + 1
        else:
            break
    return result