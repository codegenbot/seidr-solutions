text = input()
target = input()

indices = []
for i, char in enumerate(text):
    if text[i:i + len(target)] == target:
        indices.append(i)

for index in indices:
    print(index, end=" ")