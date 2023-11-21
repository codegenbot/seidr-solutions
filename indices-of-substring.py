text = input()
target = input()

indices = []
pos = -1

while True:
    pos = text.find(target, pos + 1)
    if pos == -1:
        break
    indices.append(pos)

print(" ".join(map(str,indices)))