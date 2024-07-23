def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text):
        index = text.find(target, start)
        if index == -1:
            break
        indices.append(index)
        start = index + 1
    return indices


text = input()
target = input()
result = indices_of_substring(text, target)
for index in result:
    print(index)