def indices_of_substring(text, target):
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    return indices


# Read input from user
text = input().strip()
target = input().strip()

# Call the function and print the output
output = indices_of_substring(text, target)
for idx in output:
    print(idx, end=" ")