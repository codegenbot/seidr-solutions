text = input()
target = input()

indices = []
index = 0
while index < len(text):
    index = text.find(target, index)
    if index == -1:
        break
    indices.append(index)
    index += 1 if len(target) == 1 else len(target) - 1

print(*indices)