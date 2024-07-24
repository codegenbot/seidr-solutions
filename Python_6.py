def max_nested_parentheses(paren_string):
    return max(
        [paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)]
    )