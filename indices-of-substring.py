text = input()
target = input()

indices = [i for i in range(len(text)) if text.startswith(target, i)]

indices = [i for i in indices if len(text[i:i+len(target)]) == len(target)]

for index in indices:
    print(index, end=" ")