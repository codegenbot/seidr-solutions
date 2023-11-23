text = input()
target = input()

indices = [i for i in range(len(text)) if text[i:i+len(target)] == target]
if len(indices) == 0:
    print(0)
else:
    print(*indices)