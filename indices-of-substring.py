def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


# Read input from user
text = input().strip()
target = input().strip()

# Call the function and print the output
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")