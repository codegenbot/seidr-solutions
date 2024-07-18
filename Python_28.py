# Collect input from the user
strings = input().split()

# Fix the code by wrapping it inside a function
def concatenate_strings(strings):
    return "".join(strings)

# Call the function with the input and print the result
print(concatenate_strings(strings))