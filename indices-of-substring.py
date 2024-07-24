text = input()
target = input()

indices = []
idx = 0

while idx < len(text):
    if text.find(target, idx) != -1:
        indices.append(text.find(target, idx))
        idx = text.find(target, idx) + 1
    else:
        break

for idx in indices:
    print(idx)