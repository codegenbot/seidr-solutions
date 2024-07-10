text = input()
target = input()

indices = []
index = 0
while index <= len(text) - len(target):
    if text[index:index + len(target)] == target:
        indices.append(index)
    index += 1

for index in indices:
    print(index, end=" ")