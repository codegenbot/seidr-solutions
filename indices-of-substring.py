Here's the corrected code:

```
def indices_of_substring(text):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(input("Enter target string: "), start)
        if pos == -1:
            break
        result.append(pos)
        start = pos + 1
    return result