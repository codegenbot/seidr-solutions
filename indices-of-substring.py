text = input()
target = input()

indices = []
index = -1
while (index := text.find(target, index + 1)) != -1:
    indices.append(index)

if len(indices) > 0:
    indices.pop(0)
print(*indices)