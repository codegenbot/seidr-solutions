def parse\_nested\_parens(paren\_string: str) -> List[int]:\
    return (max([paren\_string.count('(' * i) for i in range(1, len(paren\_string) // 2 + 1)]) for paren\_string in paren\_string.split())