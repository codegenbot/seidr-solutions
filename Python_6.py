def max_nested_parenthesis(paren_string):
    return max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)])

# Call the function with the input parameter
input_string = input("Enter a string of parentheses: ")
result = max_nested_parenthesis(input_string)
print(result)