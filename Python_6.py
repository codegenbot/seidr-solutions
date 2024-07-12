```
def parse_nested_parens(paren_string):
    return paren_string

def solution(paren_string):
    result = []
    for group in paren_string.split():
        if group:
            level = 0
            max_level = 0
            for char in group:
                if char == '(':
                    level += 1
                elif char == ')':
                    level -= 1
                max_level = max(max_level, level)
            result.append(max_level)
    return result

print(solution(parse_nested_parens("((()))")))