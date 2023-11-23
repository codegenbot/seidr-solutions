text = input()
target = input()

indices = [
    i for i in range(len(text) - len(target) + 1) if target in text[i : i + len(target)]
]
print(len(indices))