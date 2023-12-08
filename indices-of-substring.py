text = input()
target = input()

indices = []

for i in range(len(text) - len(target) + 1):
    if target in text[i:i+len(target)]:
        indices.append(i)

print(' '.join(map(str, indices)))