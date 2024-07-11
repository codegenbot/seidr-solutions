def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 2):
        if text[i : i + len(target)] == target or text[i : i + 2 * len(target)] == target:
            indices.append(i)
    return indices


text = input()
target = input()
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")