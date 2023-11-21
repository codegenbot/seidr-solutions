text = input()
target = input()

indices = []
start_index = 0
while start_index != -1:
    start_index = text.find(target, start_index)
    if start_index != -1:
        indices.append(start_index)
        start_index += 1

print(" ".join(map(str, indices)))