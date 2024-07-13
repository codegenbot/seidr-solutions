text = input("Enter the text string: ")
target = input("Enter the target string: ")

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target or len(set(text[i:i+len(target)]) & set(target)) == len(set(target))]