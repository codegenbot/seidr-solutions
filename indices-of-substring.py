text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 2) if target == text[i:i + len(target)]]
for index in indices:
    print(index, end=" ")