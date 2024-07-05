```
def indices_of_substring(text):
    result = []
    target = input()
    i = 0
    while True:
        i = text.find(target, i)
        if i == -1:
            break
        result.append(i)
        i += len(target)
    return sorted(result)