text = input()
target = input()

indices = []
start = 0

while start <= len(text) - len(target):
    index = text.find(target, start)

    if index == -1:
        break

    indices.append(index)
    start += len(target)  # Update start position

for index in indices:
    print(index, end=" ")