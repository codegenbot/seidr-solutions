text = input()
target = input()

indices = [i for i in range(len(text)) if text[i:i+len(target)] == target]
if not text and not target:
    print(0)
else:
    print(" ".join(map(str, indices)))