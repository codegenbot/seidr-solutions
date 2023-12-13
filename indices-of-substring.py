text = input()
target = input()

indices = [str(i) for i in range(len(text) - len(target) + 1) if text[i:i+len(target)].strip() == target.strip()]
print(" ".join(indices))