text = input()
target = input()

indices = [index for index in range(len(text)-len(target)+1) if text[index:index+len(target)] == target]
for index in indices:
    print(index, end=" ")