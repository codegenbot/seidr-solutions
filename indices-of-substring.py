text = input()
target = input()

indices = []
index = 0
while (index := text.find(target, index)) != -1:
    indices.append(index)
    index += 1

print(*indices)