text = input()
target = input()

indices = []
start = 0

while start < len(text):
    index = text.find(target, start)

    indices.append(index)
    start = index + 1

indices.pop()  # Remove the last index if it points to -1

for index in indices:
    if index != -1:
        print(index, end=" ")