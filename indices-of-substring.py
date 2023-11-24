text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)-len(target)+2) if text[i:i+len(target)] == target]

if indices:
    print(" ".join(map(str, indices)))
else:
    print("-1")