text = input()
target = input()

indices = [i for i, substring in enumerate(text) if substring == target]
print(" ".join(map(str, indices)))