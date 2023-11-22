text = input()
target = input()

indices = []
start = 0

while True:
    found_index = text.find(target, start)
    if found_index == -1:
        break
    indices.append(found_index)
    start = found_index + 1

print(*indices)