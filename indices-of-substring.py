text = input()
target = input()
indices = [i for i in range(len(text)) if text.find(target, i) == i]
print(0 if not indices else '\n'.join(map(str, indices)))