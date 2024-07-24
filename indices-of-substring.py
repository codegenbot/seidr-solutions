def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


# Reading input from user
text = input().strip()
target = input().strip()

# Calling the function and printing the output
output = indices_of_substring(text, target)
for index in output:
    print(index, end=" ")