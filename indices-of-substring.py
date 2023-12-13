text = input()
target = input()
indices = [str(i) for i in range(len(text) - len(target) + 2) if text.find(target, i) >= 0]
print(" ".join(indices))