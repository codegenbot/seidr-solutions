def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += len(target) - 1
        i += 1
    return indices

text = input().strip()
target = input().strip()
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")