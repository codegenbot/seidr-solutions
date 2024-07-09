text = input()
target = input()

indices = []
index = -1
while (index := text.find(target, index + 1)) != -1:
    indices.append(index)

if len(indices) > 1:
    for i in range(1, len(indices)):
        indices[i] = indices[i] - len(target) + 1

print(*indices)