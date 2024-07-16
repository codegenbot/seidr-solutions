from typing import List

def parse_nested_parens(paren_strings: List[str]) -> List[int]:
    return [
        max(
            [
                paren_string.count('(' * i)
                for i in range(1, (len(paren_string) // 2) + 1)
            ]
        )
        for paren_string in paren_strings
    ]

# Read input from the user
paren_strings = input("Enter a list of strings separated by space: ").split()

# Call the function with the input list
result = parse_nested_parens(paren_strings)
print(result)