text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text.find(target, i, i + len(target) - 1) != -1]

print(' '.join(map(str, indices)))