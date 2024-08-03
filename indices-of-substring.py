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


# Read input
text = input().strip()
target = input().strip()

# Get and print output
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")