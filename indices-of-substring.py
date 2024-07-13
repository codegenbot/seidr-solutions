text = input("Enter the text string: ")
target = input("Enter the target string: ")
if not target:
    print([])
else:
    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target]
    print(indices)