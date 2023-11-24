text = input().strip()
target = input().strip()

indices = []
i = 0
while i < len(text):
    if target.lower() == text[i:i+len(target)].lower():
        indices.append(i)
        i += len(target)
    else:
        i += 1

if len(indices) == 0:
    print("-1")
else:
    print(" ".join(map(str, indices)))