text = input()
target = input()

indices = [(i, i+len(target)-1) for i in range(len(text) - len(target) + 1) if text.find(target, i, i+len(target)) != -1]

for start, end in indices:
    print(start, end)