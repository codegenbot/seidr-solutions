```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_level = 0
    current_level = 0
    
    for char in paren_string:
        if char == '(':
            current_level += 1
            stack.append(current_level)
            if current_level > max_level:
                max_level = current_level
        elif char == ')':
            stack.pop()
            if not stack:
                current_level = 0
        else:
            continue
        
    result = [max_level - i for i in range(1, len(result) + 1)]
    return result