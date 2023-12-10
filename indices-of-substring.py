text = input()
target = input()

indices = []
start = 0

while start < len(text) - len(target) + 1:
    index = text.find(target, start)
    if index == -1:
        break
    indices.append(index)
    start = index + 1

print(" ".join(map(str, indices)))