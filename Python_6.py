def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
            result.append(level)
        elif char == ')':
            level -= 1
            result.append(level)
    return result

if __name__ == "__main__":
    print(parse_nested_parens("((()))"))