text = input().strip()
target = input().strip()
indices = [i for i in range(len(text)-len(target)+1) if target.lower() in text[i:i+len(target)].lower()]

if not indices:
    print("-1")
else:
    print("\n".join(map(str, indices)))