def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            indices.append(i)
        i += 1
    return indices

# Read input
text = input().strip()
target = input().strip()

# Call the function and print the result
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")