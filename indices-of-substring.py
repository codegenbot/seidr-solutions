text = input()
target = input()

indices = []
index = -len(target)
while index != -1:
    index = text.find(target, index + 1)
    if index != -1:
        indices.append(index)

print(*indices)