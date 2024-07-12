```
def indices_of_substring(text):
    target = input().split(',')
    result = []
    for t in target:
        pos = text.find(t)
        while pos != -1:
            result.append(pos)
            pos = text.find(t, pos + len(t))
    return result

text = input()
print(indices_of_substring(text))