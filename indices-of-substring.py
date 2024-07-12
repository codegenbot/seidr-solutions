text = input()
target = input()
indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
if not indices:
    print(0)
    exit()
for index in indices:
    print(index)