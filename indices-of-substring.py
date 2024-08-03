def indices_of_substring(text, target):
    indices = []
    start = 0
    while True:
        start = text.find(target, start)
        if start == -1:
            break
        indices.append(start)
        start += 1
    return indices


text = input()
target = input()
result = indices_of_substring(text, target)
for idx in result:
    print(idx)