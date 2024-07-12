def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)].lower() == target.lower():
            indices.append(i)
    return indices


text = input()
target = input()
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")