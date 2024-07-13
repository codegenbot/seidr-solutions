Here is the Python solution for the problem:

```
def indices_of_substring(text):
    result = []
    start_index = 0
    while True:
        try:
            start_index = text.index(input(), start_index)
            result.append(start_index)
            start_index += len(input())
        except ValueError:
            break
    return result