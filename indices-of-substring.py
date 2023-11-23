text = input()
target = input()

indices = [i + 1 for i in range(len(text)-len(target)+1) if text.find(target, i, i+len(target)) != -1]
print(*indices)