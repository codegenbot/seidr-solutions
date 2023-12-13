text = input()
target = input()
indices = [str(i) for i in range(len(text) - len(target) + 1) if text.find(target, i, i + len(target)) >= 0 or text.find(target, i, i + len(target)) + 1 >= 0]
print(" ".join(indices))