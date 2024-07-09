text = input()
target = input()

indices = []
index = 0
while index < len(text):
    index = text.find(target, index)
    if index == -1:
        break
    indices.append(index)
    index += 1 if target else len(target)

print(*indices)