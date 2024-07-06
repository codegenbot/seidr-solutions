```
def parse_nested_parens(s):
    result = []
    levels = 0
    for char in s:
        if char == "(":
            levels += 1
            result.append(str(levels))
        elif char == ")":
            levels -= 1
            result.append(str(levels))
    print(result)