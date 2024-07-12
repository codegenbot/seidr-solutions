text = input()
target = input()

indices = [i for i in range(len(text)) if text.startswith(target, i)]

for index in indices:
    print(index)