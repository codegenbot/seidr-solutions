text = input()
target = input()
indices = [str(i) for i in range(len(text) - len(target) + 1) if text.index(target, i, i+len(target)) != -1]
print(" ".join(indices))