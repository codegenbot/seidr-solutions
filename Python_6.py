def max_nested_parentheses(paren_string):
    return max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)])

# Call the function with the desired input
input_string = input("Enter a string with parentheses: ")
result = max_nested_parentheses(input_string)
print(result)