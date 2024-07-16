```
def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        pos = text.find(target, i)
        if pos != -1:
            result.append(i + pos)
    return list(set(result))

text = input()
target = input()
print(indices_of_substring(text, target))