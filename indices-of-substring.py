text = input()
target = input()
indices = [
    i for i in range(len(text) - len(target) + 1) if text[i : i + len(target)] == target and target in text
]
print(0 if not indices else "\n".join(map(str, indices)))