text = input().strip()
target = input().strip()

indices = [i for i in range(len(text)) if text[i:].find(target) == 0]

print(" ".join(map(str, indices)))