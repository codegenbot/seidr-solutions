text = input()
target = input()

indices = []

for i in range(len(text) - len(target) + 1):
    substring = text[i:i+len(target)]
    if substring == target or substring == target[::-1] or substring[::-1] == target:
        indices.append(i)

print(' '.join(map(str, indices)))