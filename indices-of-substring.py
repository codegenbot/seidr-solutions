text = input()
target = input()

indices = []
start = 0

while start < len(text):
    index = text.find(target, start)

    if index == -1:
        break

    indices.append(index)
    start = index + 1

idx = 1
while idx < len(indices):
    if indices[idx] == indices[idx - 1]:
        del indices[idx]
    else:
        idx += 1

for index in indices:
    print(index, end=" ")