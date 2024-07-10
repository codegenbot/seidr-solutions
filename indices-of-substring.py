```
def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        if text.startswith(target, i):
            j = text.index(target, i)
            result.append(j)
    return result