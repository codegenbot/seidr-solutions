text = input()
target = input()

indices = []
start = 0

while start < len(text):
    index = text.find(target, start)

    if index == -1:
        break

    indices.append(index)
    start = index + len(target)

for index in indices:
    print(index, end=" ")