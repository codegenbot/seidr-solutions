text = input()
target = input()
indices = []
for i in range(len(text) - len(target) + 1):
    if text[i:i+len(target)] == target and (i == 0 or text[i-1] != target[-1]):
        indices.append(i)
print(' '.join(map(str, indices)))