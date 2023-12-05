def separate_paren_groups(paren_string: str) -> list[str]:
    open_parens = 0
    closed_parens = 0
    separated_groups = []
    for i, char in enumerate(paren_string):
        if char == '(':
            open_parens += 1
        elif char == ')':
            closed_parens += 1
        elif char.isspace():
            continue
        else:
            separated_groups[-1].append(char)
    if open_parens != closed_parens:
        raise ValueError("Unbalanced parentheses")
    return separated_groups