def parse_nested_parens() -> List[int]:
    result = []
    num_strings = int(input())
    for _ in range(num_strings):
        paren_string = input()
        max_count = max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)]) // 2
        result.append(max_count)
    return result

output = parse_nested_parens()