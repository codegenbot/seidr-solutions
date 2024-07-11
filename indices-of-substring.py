text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = []
i = 0

while i < len(text):
    if text.startswith(target, i):
        indices.append(i)
        i += 1
    else:
        i += 1

print(indices)