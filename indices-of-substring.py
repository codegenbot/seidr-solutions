Here is a Python solution for the problem:

```
def indices_of_substring(text):
    indices = [0]
    i = 1
    while i <= len(text) - len(text.split()[1]):
        if text[i:i+len(text.split()[1])] == text.split()[1]:
            indices.append(i)
        i += 1
    return indices