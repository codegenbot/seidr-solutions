text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if target in text[i : i + len(target)]]
print(" ".join(str(i) for i in indices))