text = input().strip()
target = input().strip()
indices = [
    i for i in range(len(text) - len(target) + 1) if text[i : i + len(target)] == target
]
print(0 if not indices else "\n".join(map(str, indices)))