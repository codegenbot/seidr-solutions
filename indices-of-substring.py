text = input()
target = input()

indices = [i for i in range(len(text)) if text.lower()[i:i+len(target)].lower() == target.lower()]

for index in indices:
    print(index)