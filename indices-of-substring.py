text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = [
    i for i in range(len(text) - len(target) + 1) if target in text[i : i + len(target)]
]

print(indices)