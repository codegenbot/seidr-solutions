text = input()
target = input()

indices = []
index = 0
while index < len(text) - len(target) + 1:
    index = text.find(target, index)
    if index == -1:
        break
    indices.append(index + 1)
    index += 1

print(*indices)