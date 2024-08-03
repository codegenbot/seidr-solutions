Here is the Python solution for the problem:

```
def indices_of_substring(text):
    result = []
    i = 0
    while i < len(text):
        j = text.find(text[i:], i)
        if j == -1:
            break
        result.append(j)
        i += j + 1
    return result