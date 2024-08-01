from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1))
        for paren_string in paren_string.split()
    ]

# Read input from user
input_str = input("Enter a string of parentheses: ")

# Call the function with the input and print the result
print(parse_nested_parens(input_str))