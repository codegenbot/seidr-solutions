text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or len(set(text[i:i + len(target)]) & set(target)) == len(target)]
for index in indices:
    print(index, end=" ")