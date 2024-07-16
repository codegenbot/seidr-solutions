from typing import List

def parse_nested_parens(paren_strings: List[str]) -> List[int]:
    return [
        max(
            [
                paren_string.count("(" * i)
                for i in range(1, (len(paren_string) // 2) + 1)
            ]
        )
        for paren_string in paren_strings
    ]

# Read input from user
paren_strings = input("Enter a list of parenthesized strings separated by spaces: ").split()

# Call the function with the input provided by the user
print(parse_nested_parens(paren_strings))