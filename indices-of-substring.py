text = input()
target = input()
indices = []
i = 0
while i <= len(text) - len(target):
    index = text.find(target, i)
    if index != -1:
        indices.append(str(index))
        i = index + 1
    else:
        break
print(" ".join(indices))