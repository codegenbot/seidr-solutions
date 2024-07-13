text = input("Enter the text string: ")
target = input("Enter the target string: ")
indices = [i for i in range(len(text)) if any(text[i:i + len(target)] == target for i in range(len(text) - len(target) + 1)]
print(indices)