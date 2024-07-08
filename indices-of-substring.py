text = input()
target = input()

indices = []
start = -1

while True:
    start = text.find(target, start+1)
    if start == -1:
        break
    indices.append(start)

print(*indices)