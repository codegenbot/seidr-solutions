text = input()
target = input()
indices = [i for i in range(len(text) - len(target) + 2) if text[i:i + len(target)] == target]
for idx in indices:
    print(idx + 1, end=" ")