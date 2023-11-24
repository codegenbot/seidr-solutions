text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target]
if len(indices) == 0:
    indices = [-1]
print(" ".join(map(str, indices)))