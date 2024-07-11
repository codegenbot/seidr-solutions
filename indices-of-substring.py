def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        index = text.find(target, i)
        if index == -1:
            break
        indices.append(index)
        i = index + 1
    return indices


text = input()
target = input()
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")