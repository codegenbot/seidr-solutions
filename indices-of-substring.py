text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or (i > 0 and text[i-1] == ' ' and text[i:i + len(target)] == target) or (i + len(target) < len(text) and text[i + len(target)] == ' ' and text[i:i + len(target)] == target)]

print(indices)