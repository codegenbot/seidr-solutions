from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(
            [
                paren_string.count("(" * i) // 2
                for i in range(1, len(paren_string) // 2 + 1)
            ]
        )
        for paren_string in paren_string.split()
    ]

input_string = input("Enter the nested parentheses strings separated by whitespace: ")
output = parse_nested_parens(input_string)
print(output)