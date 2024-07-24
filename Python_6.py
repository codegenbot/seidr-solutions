def max_nested_paren_count(paren_string):
    return max([sum(1 for char in paren_string[:i] if char == "(") for i in range(1, len(paren_string) + 1)])

# Call the function with the input
input_string = input("Enter the paren_string: ")
result = max_nested_paren_count(input_string)
print(result)