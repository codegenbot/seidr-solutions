text = input()
target = input()

indices = [
    i for i in range(len(text) - len(target) + 1) if text[i : i + len(target)] == target
]
print(*[i + 1 if i >= 0 else i for i in indices])