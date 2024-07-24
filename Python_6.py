def max_nested_paren_count(paren_strings):
    return [
        max(
            [
                sum([1 for char in paren_string if char == "("][:i])
                for i in range(1, paren_string.count("(") + 1)
            ]
        )
        for paren_string in paren_strings
    ]

input_string = input().strip().split(',')
result = max_nested_paren_count(input_string)
print(result)