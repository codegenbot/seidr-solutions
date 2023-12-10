text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
start = 0

while True:
    index = text.find(target, start)
    if index == -1:
        break
    indices.append(index)
    start = index + 1

print(" ".join(map(str, indices)))