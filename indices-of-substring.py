text = input().strip()
target = input().strip()

indices = []
i = 0
while i <= len(text)-len(target):
    if text[i:i+len(target)] == target and text[i-1:i+len(target)] != target:
        indices.append(i)
        i += len(target)
    else:
        i += 1

print(" ".join(map(str, indices)))