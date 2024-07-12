def indices_of_substring(text, target):
    indices = []
    start = 0
    while start <= len(text) - len(target):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices

text = input()
target = input()
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")