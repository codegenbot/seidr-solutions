text = input().strip()
target = input().strip()
indices = [str(i) for i in range(len(text)) if text[i:i+len(target)] == target]
print(" ".join(indices))