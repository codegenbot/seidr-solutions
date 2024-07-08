text = input()
target = input()
indices = [i for i in range(len(text)) if text.startswith(target, i)]
pos = 0
while pos < len(text):
    if text.find(target, pos) != -1:
        print(text.find(target, pos), end=" ")
        pos = text.find(target, pos) + 1
    else:
        break