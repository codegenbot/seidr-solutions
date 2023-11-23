text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
print(*[i for i in indices])  # subtract 1 from the index values