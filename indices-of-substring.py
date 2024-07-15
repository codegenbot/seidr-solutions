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
text = input().strip()
target = input().strip()

# Get and print output
output = indices_of_substring(text, target)
for idx in output:
    print(idx)