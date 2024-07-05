def indices_of_substring(text, target):
    indices = [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i : i + len(target)] == target
    ]
    return indices

# Read input
text = input().strip()
target = input().strip()

# Get the indices
result = indices_of_substring(text, target)

# Print the result
print(len(result))
print(" ".join(map(str, result)))