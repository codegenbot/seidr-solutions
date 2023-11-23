text = input()
target = input()

indices = [i for i in range(len(text)-len(target)+1) if text[i:i+len(target)] == target] + ([len(text)-len(target)+1] if text[-len(target):] == target else [])
print(*[i + 1 for i in indices])