text = input()
target = input()

indices = [i for i in range(len(text)) if text.find(target, i) >= 0]

for index in indices:
    print(index, end=" ")