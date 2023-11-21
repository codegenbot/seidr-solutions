text = input()
target = input()

indices = [i for i in range(len(text)) if text.find(target, i) + len(target) > i]
print(" ".join(map(str, indices)))