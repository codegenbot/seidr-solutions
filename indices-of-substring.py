text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target or text.startswith(target, i)]
for index in indices:
    print(index, end=" ")