text = input()
target = input()
indices = [i for i in range(len(text) - len(target) + 2) if text.find(target, i) == i or text.find(target, i + 1) == i + 1]
for index in indices:
    print(index, end=" ")