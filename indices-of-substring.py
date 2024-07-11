```python
def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        j = text.find(target, i)
        if j != -1:
            result.append(j)
            i = j + len(target) 
        else:
            break
    return result