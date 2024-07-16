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

# Read input from user
try:
    n = int(input())
    paren_strings = [input() for _ in range(n)]
    
    # Call the function with the input
    result = parse_nested_parens(paren_strings)
    print(result)
    
except ValueError:
    print("Invalid input. Please enter a valid integer.")
except EOFError:
    print("No input received. Please provide valid input.")