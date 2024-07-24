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


# Read input
text = input()
target = input()

# Output
for idx in indices_of_substring(text, target):
    print(idx, end=" ")