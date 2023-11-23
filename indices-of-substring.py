text = input()
target = input()

indices = [i for i in range(len(text)) if target in text[i:i+len(target)]]
if not indices:
    print(0)
else:
    print(" ".join(map(str, indices)))