text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target]
for i, char in enumerate(text):
    if text[i:i + len(target)] == target:
        indices.append(i)

for index in indices:
    print(index, end=" ")