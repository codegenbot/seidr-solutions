text = input()
target = input()

indices = []
index = 0
while index < len(text):
    index = text.find(target, index)
    if index == -1:
        break
    indices.append(index)
    index += len(target)

print(*indices)