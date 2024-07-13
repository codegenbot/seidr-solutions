text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text[i : i + len(target)] == target]
for index in indices:
    print(index, end=" ")