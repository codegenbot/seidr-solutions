text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text.find(target, i, i + len(target)) != -1]
for index in indices:
    print(index, end=" ")