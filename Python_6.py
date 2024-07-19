from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    if not all(char in ["(", ")"] for char in paren_string):
        return []

    count = 0
    max_count = 0

    for i in range(len(paren_string) - 1):
        if paren_string[i] == "(" and paren_string[i + 1] == ")":
            count += 1
            max_count = max(max_count, count)
        else:
            count = 0

    return [max_count]


input_paren_string = input().strip()
result = parse_nested_parens(input_paren_string)
print(result[0] if result else "Invalid input")