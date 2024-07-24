text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text.startswith(target, i)]

for idx in indices:
    print(idx, end=" ")