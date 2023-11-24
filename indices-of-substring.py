text = input()
target = input()

indices = [i for i in range(len(text)) if target in text[i:i+len(target)]]
print(*indices)