def indices_of_substring(text, target):
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return indices


# Read input
text = input().strip()
target = input().strip()

# Get indices of target in text
result = indices_of_substring(text, target)

# Print output
for idx in result:
    print(idx)