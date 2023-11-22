def parse_nested_parens(paren_string: str) -> List[int]:
    count_list = []
    for word in paren_string.split():
        count = 0
        open_parens = 0
        for char in word:
            if char == '(':
                open_parens += 1
            elif char == ')':
                if open_parens > 0:
                    count += 1
                open_parens -= 1
        count_list.append(count)
    return count_list