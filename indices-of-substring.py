text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)-len(target)+1) if target == text[i:i+len(target)]]

if not indices:
    print("-1")
else:
    print(" ".join(map(str, indices)))