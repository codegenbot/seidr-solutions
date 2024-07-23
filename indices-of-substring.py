def indices_of_substring(text, target):
    return [
        i
        for i in range(len(text) - len(target) + 1)
        if text[i : i + len(target)] == target
    ]


# Read input
text = input().strip()
target = input().strip()

# Call function and print output
output = indices_of_substring(text, target)
for idx in output:
    print(idx, end=" ")