def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text):
        idx = text.find(target, start)
        if idx == -1:
            break
        indices.append(idx)
        start = idx + 1
    return indices

# Read input
text = input().strip()
target = input().strip()

# Get indices of target in text
result = indices_of_substring(text, target)

# Print output
for idx in result:
    print(idx, end=" ")