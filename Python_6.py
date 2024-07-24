def max_nested_paren_count(paren_string):
    return [
        max(
            [
                sum([1 for char in paren if char == "("][:i])
                for i in range(1, paren.count("(") + 1)
            ]
        )
        for paren in paren_string.split()
    ]

input_string = input().strip()  
result = max_nested_paren_count(input_string.split(')'))
print(result)