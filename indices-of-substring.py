text = input()
target = input()
indices = [str(i) for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target or text[i:i+len(target)].replace(" ", "") == target]
print(" ".join(indices))