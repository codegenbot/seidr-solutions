text = input()
target = input()

indices = []
for i in range(len(text)):
    if text[i : i + len(target)] == target:
        indices.append(i)

print(*indices)