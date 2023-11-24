text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target or target in text[i+1:i+len(target)+1]]

print(" ".join(map(str, indices)))