text = input()
target = input()
indices = []
try:
    for i in range(len(text) - len(target) + 1):
        if text.find(target, i, i + len(target)) != -1:
            indices.append(str(i))
except ValueError:
    pass
print(" ".join(indices))