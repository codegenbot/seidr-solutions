text = input()
target = input()

indices = []
index = 0
while index <= len(text) - len(target):
    index = text.find(target, index)
    if index == -1:
        break
    indices.append(index)
    index += len(target)

print(*indices)