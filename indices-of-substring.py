def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


# Read input
text = input().strip()
target = input().strip()

# Call the function and print the indices
for index in indices_of_substring(text, target):
    print(index, end=" ")