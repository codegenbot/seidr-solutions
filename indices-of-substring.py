text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = [i for i in range(len(text) - len(target) + 1) if all(text[i+j] == target[j] for j in range(len(target))]

print(indices)