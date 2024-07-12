def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices

# Read input
text = input().strip()
target = input().strip()

# Get indices of target in text
result = indices_of_substring(text, target)

# Print output
for idx in result:
    print(idx)