```
def parse_nested_parens(s):
    result = []
    nested_levels = 0
    temp = ""
    for char in s:
        if char == "(":
            nested_levels += 1
            temp += str(nested_levels) + "("
        elif char == ")":
            temp += ")"
            nested_levels -= 1
        else:
            temp += char
        if nested_levels == 0:
            result.append(temp)
            temp = ""
    print(result)

parse_nested_parens(input())