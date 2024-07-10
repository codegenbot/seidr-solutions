from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    current_group = ''
    max_level = 0
    for char in paren_string:
        if char == '(':
            current_group += '('
            max_level += 1
        elif char == ')':
            current_group += ')'
            max_level -= 1
            if max_level < 0:
                result.append(-max_level)
                max_level = 0
                if not current_group:
                    continue
                while current_group and current_group[0] == '(':
                    result.append(int(current_group[1:-1]))
                    current_group = current_group[1:-1]
    return [int(x) for x in current_group.replace('(','-').replace(')', '').split(',')] + result

paren_string = input("Enter the string: ")
print(parse_nested_parens(paren_string))