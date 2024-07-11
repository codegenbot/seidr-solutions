def indices_of_substring(text, target):
    indices = []
    i = 0
    while i <= len(text) - len(target):
        if text[i : i + len(target)] == target or (i > 0 and text[i-1 : i + len(target) - 1] == target):
            indices.append(i)
        i += 1
    return indices

text = input()
target = input()
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")