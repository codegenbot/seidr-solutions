text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target or (len(target) > 1 and i < len(text)-len(target) and text[i:i+len(target)-1] == target[:-1])]
for index in indices:
    print(index, end=" ")