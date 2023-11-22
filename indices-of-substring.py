text = input()
target = input()

indices = [str(i) for i in range(len(text)) if target in text[i : i + len(target)]]
print(" ".join(indices))