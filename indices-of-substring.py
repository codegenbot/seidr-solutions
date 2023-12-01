text = input()
target = input()

indices = []
start = 0
while start <= len(text) - len(target):
    if text[start:start+len(target)] == target:
        indices.append(start)
    start += 1

print(" ".join(str(index) for index in indices))