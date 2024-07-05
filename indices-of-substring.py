def indices_of_substring(text, target):
    indices = []
    index = text.find(target)
    while index != -1:
        indices.append(index)
        index = text.find(target, index + 1)
    return indices


text = input().strip()
target = input().strip()
result = indices_of_substring(text, target)
print(len(result))
print(" ".join(map(str, result)))