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


# read input
text = input()
target = input()

# get indices of target in text
result = indices_of_substring(text, target)

# print output
for index in result:
    print(index)