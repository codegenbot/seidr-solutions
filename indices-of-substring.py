text = input().strip()
target = input().strip()

start_index = 0
indices = []
while start_index < len(text):
    idx = text.find(target, start_index)
    if idx == -1:
        break
    indices.append(idx)
    start_index = idx + 1

print(*indices)