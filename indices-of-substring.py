text = input().strip()
target = input().strip()

indices = [i for i in range(len(text) - len(target) + 1) if text.find(target, i, i + len(target)) == i]
print(" ".join(str(i) for i in indices))