def parse_nested_parens():
    s = input()
    result = []
    level = 0
    max_level = 0

    for char in s:
        if char == "(":
            level += 1
            max_level = max(max_level, level)
        elif char == ")":
            level -= 1

    return [max_level]