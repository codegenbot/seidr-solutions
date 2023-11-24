text = input().strip()
target = input().strip()

indices = []
for i in range(len(text)-len(target)+1):
    if text[i:i+len(target)] == target:
        indices.append(i)

print(" ".join(map(str, indices)))