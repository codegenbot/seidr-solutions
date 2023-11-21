text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text.startswith(target, i)]
print("0" if not indices else " ".join(map(str, indices)))