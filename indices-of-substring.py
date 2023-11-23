text = input()
target = input()

indices = [i + 1 for i in range(len(text)-len(target)+1, len(text)) if target in text[i:i+len(target)]]
print(*indices)