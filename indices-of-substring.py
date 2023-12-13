text = input()
target = input()

indices = [str(i) for i in range(len(text)) if text.find(target, i) == i]
print(" ".join(indices))