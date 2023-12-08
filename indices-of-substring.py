text = input()
target = input()

indices = []
start = 0

while start <= len(text) - len(target):
    if text[start:start+len(target)] == target or text[start:start+len(target)].startswith(target):
        indices.append(start)
    start += 1

print(' '.join(map(str, indices)))