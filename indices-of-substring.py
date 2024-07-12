text = input()
target = input()
indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
if indices:
    for index in indices:
        print(index)
else:
    print(0)