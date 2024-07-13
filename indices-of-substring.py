def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


# Read inputs
text = input()
target = input()

# Output indices
for index in indices_of_substring(text, target):
    print(index, end=" ")