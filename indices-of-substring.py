text = input()
target = input()

indices = []
index = -1
while index < len(text):
    index = text.find(target, index + 1)
    if index == -1:
        break
    indices.append(index)

print(*indices)