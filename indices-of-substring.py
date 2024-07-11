text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = []
i = 0

while i <= len(text) - len(target):
    if text[i:i + len(target)] == target:
        indices.append(i)
    i += 1

print(indices)