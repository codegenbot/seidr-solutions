text = input()
target = input()

indices = [i for i in range(1, len(text) - len(target) + 2) if text[i-1:i+len(target)-1] == target]

print(' '.join(map(str, indices)))