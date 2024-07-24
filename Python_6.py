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


# Read input line by line
input_lines = []
try:
    while True:
        input_lines.append(input().strip())
except EOFError:
    pass

# Call the function with each input line
results = [max_nested_paren_count(line) for line in input_lines]
print(results)