def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += 1
        else:
            i += 1
    return indices

text = input()
target = input()
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")