def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    result.append(
        max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)])
        // 2
    )
    return result


input_str = input().strip()
output = parse_nested_parens(input_str)
print(output)