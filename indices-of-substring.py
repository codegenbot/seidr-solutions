text = input()
target = input()

indices = [i for i in range(len(text)) if text.find(target, i) == i and i + len(target) <= len(text)]
for index in indices:
    print(index)