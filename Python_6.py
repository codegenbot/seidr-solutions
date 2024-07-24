from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return max(
        [paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)]
    )

# Read input from user
paren_string = input("Enter the parentheses string: ")

# Call the function with user input
result = parse_nested_parens(paren_string)
print(result)