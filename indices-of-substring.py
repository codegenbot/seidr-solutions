text = input()
target = input()

indices = [i+1 for i in range(len(text)) if text[i:i+len(target)] == target]
print(*indices)