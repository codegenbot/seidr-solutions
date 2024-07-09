```python
def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos - len(target) + 1)
        if pos == -1:
            break
        result.append(pos + 1) 
        pos += len(target)

    return result