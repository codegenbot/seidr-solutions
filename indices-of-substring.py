def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text):
        index = text.find(target, start)
        if index == -1:
            break
        indices.append(index)
        start = index + 1
    return indices


text = input().strip()
target = input().strip()
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")