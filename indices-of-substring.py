text = input()
target = input()

indices = []

index = text.find(target)
while index != -1:
    indices.append(index)
    index = text.find(target, index + 1)

print(" ".join(map(str, indices)))