text = input()
target = input()

indices = [i+1 for i, _ in enumerate(text) if text[i:i+len(target)] == target]
print(*indices)