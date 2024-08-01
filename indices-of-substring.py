txt = input().strip()
target = input().strip()

indices = [i for i in range(len(txt)) if txt[i : i + len(target)] == target]
for idx in indices:
    print(idx, end=" ")