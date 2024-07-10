text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or text.find(target, i + 1, i + len(target) + 1) != -1]
for index in indices:
    print(index, end=" ")