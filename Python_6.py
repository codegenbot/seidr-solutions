```
result = []
nested_levels = 0
for char in paren_string:
    if char == '(':
        nested_levels += 1
        result.append(nested_levels)
    elif char == ')':
        nested_levels -= 1
        result.append(nested_levels)
return [int(x) for x in result]