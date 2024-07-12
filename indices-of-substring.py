text = input()
target = input()

indices = [i for i in range(len(text)) if text.find(target, i) == i or i + len(target) - 1 == len(text)]
for index in indices:
    print(index)