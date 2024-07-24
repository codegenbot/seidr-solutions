def max_nested_parentheses(paren_string):
    return [
        max(
            [
                sum([1 for char in paren_string if char == "("][:i])
                for i in range(1, paren_string.count("(") + 1)
            ]
        )
        for paren_string in paren_string.split()
    ]

input_string = "(()) ((())()"
output = max_nested_parentheses(input_string)
print(output)