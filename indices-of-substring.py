text = input()
target = input()
indices = [i for i in range(1, len(text) - len(target) + 1) if text[i:i+len(target)] == target]
print(' '.join(map(str, indices)))