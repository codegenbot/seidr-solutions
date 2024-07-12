text = input("Enter the text string: ").lower().rstrip()
target = input("Enter the target string: ").lower().rstrip()

indices = [i for i in range(len(text) - len(target) + 1) if text[i: i + len(target)] == target]

print(indices if indices else 0)