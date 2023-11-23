text = input()
target = input()

if len(target) > len(text):
    print(0)
else:
    indices = [i for i in range(len(text)) if text[i : i + len(target)] == target]
    if not indices:
        print(0)
    else:
        print(" ".join(map(str, indices)))