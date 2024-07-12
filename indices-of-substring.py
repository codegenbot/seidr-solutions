text = input()
target = input()
indices = [i for i in range(len(text)) if text.startswith(target, i)]
print(0 if not indices else '\n'.join(map(str, indices)))