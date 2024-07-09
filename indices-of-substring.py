text = input()
target = input()

indices = []
index = -1
while (index := text.find(target, index + 1)) != -1:
    indices.append(index)

if indices:  # Check if indices list is not empty
    print(*indices)