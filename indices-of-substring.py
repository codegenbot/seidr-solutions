text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text.startswith(target, i)]
print(" ".join(map(str, indices)) if len(indices) > 0 else "0")