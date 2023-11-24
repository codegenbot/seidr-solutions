text = input()
target = input()

indices = [i for i in range(1, len(text)+1) if text[i-1:i-1+len(target)] == target]
print(*indices)