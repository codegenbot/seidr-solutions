def concatenate_strings(strings):
    return "".join(strings)

print("Enter the strings separated by spaces:")
strings = input().split()
print(concatenate_strings(strings))