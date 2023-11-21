text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text.startswith(target, i)]
print(" ".join(str(i) for i in indices))