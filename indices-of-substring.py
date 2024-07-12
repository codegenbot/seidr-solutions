text = input()
target = input()
indices = [i for i in range(len(text) - len(target) + 1) if text.startswith(target, i) or text[i:i+len(target)] == target]
for index in indices:
    print(index)