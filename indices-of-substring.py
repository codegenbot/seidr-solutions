def indices_of_substring(text, target):
    if not text or not target:
        return []

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

# Get indices and print output
result = indices_of_substring(text, target)
for idx in result:
    print(idx)