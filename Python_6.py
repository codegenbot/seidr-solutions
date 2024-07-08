def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)])
        // 2
        for paren_string in paren_string.split()
    ]


if __name__ == "__main__":
    test_cases = input().strip().split(",")
    result = parse_nested_parens(test_cases)
    print(result)