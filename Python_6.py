def max_nested_paren_count(paren_string):
    return [
        max(
            [
                sum([1 for char in paren_string if char == "("][:i])
                for i in range(1, paren_string.count("(") + 1)
            ]
        )
        for paren_string in paren_string.split()
    ]

# Call the function with the input
input_string = input().strip()
result = max_nested_paren_count(input_string)
print(result)