text = input()
target = input()

indices = [idx for idx, _ in enumerate(text) if text[idx:idx + len(target)] == target]

print(*indices)