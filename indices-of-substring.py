```
def indices_of_substring(text):
    result = []
    target = input()
    for i in range(len(text)):
        pos = text[i:].find(target)
        if pos != -1:
            result.append(i + pos)
    return list(set(result))