text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target]

if not indices:
    print("-1")
else:
    print("\n".join(map(str, indices)))