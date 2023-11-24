text = input().strip()
target = input().strip()

indices = []
index = 0
while True:
    index = text.find(target, index)
    if index == -1:
        break
    indices.append(index)
    index += 1

print(" ".join(map(str, indices)))