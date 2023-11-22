text = input()
target = input()

indices = []
for i in range(len(text) - len(target) + 1):
    if text[i:i+len(target)] == target:
        indices.append(i+target.index(target[0]))

print(*indices)