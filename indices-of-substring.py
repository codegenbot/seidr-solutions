text = input()
target = input()

indices = [
    i
    for i in range(len(text))
    if text.find(target, i) == i or text.find(target, i) == i - 1
]
for index in indices:
    print(index, end=" ")