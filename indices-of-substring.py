text = input()
target = input()

indices = []
idx = -1
while True:
    idx = text.find(target, idx + 1)
    if idx == -1:
        break
    indices.append(idx)

for idx in indices:
    print(idx, end=" ")