def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


# Read input
text = input().strip()
target = input().strip()

# Output indices of target in text
for i in indices_of_substring(text, target):
    print(i, end=" ")