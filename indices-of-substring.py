text = input()
target = input()

indices = [i for i, _ in enumerate(text) if text[i:i+len(target)] == target]
print(" ".join(map(str, indices)))