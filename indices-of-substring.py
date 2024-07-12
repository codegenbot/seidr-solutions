def indices_of_substring(text, target):
    indices = []
    index = 0
    while index < len(text):
        index = text.find(target, index)
        if index == -1:
            break
        indices.append(index)
        index += 1
    return indices


text = input().strip()
target = input().strip()
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")