def parse_nested_parens(paren_string):
    return [max([paren_string.count("(" * i) for i in range(1, 10)])]