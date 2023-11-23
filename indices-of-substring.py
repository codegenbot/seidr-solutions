text = input()
target = input()

indices = []
i = 0
while i < len(text) - len(target) + 1:
    if text.find(target, i) == i:
        indices.append(i)
        i += len(target)
    else:
        i += 1

print(*indices)