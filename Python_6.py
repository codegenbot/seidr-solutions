def parse_nested_parens() -> List[int]:
    paren_string = input().strip()
    return [
        max([paren.count("(" * i) for i in range(1, len(paren) // 2 + 1)])
        for paren in paren_string.split(" ")
    ]


result = parse_nested_parens()
print(result)