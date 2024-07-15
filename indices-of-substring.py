text = input().strip()
target = input().strip()

indices = [i for i in range(len(text) - len(target) + 1) if text.find(target, i, i + len(target)) == i]

for index in indices:
    print(index, end=" ")