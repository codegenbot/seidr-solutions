text = input()
target = input()

if target == "":
    indices = list(range(len(text)))
else:
    indices = [i for i in range(len(text)) if text[i:i+len(target)] == target]

print(*indices)