def indices_of_substring(text, target):
    indices = []
    if not text or not target:
        return indices
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


text = input().strip()
target = input().strip()
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")