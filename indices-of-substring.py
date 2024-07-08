Here is the Python solution for the problem:

```
def indices_of_substring(text):
    result = []
    index = 0
    while True:
        index = text.find(text[index:], 1)
        if index == -1:
            break
        result.append(index)
        index += len(text[:index])
    return result