def indices_of_substring(text, target):
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return indices


# Read input
text = input().strip()
target = input().strip()

# Get output
output = indices_of_substring(text, target)
for idx in output:
    print(idx, end=" ")