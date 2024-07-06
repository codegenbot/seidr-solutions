```
nested_levels = 0
result = []
for char in input().strip('()'):
    if char == '(':
        nested_levels += 1
        result.append(str(nested_levels))
    elif char == ')':
        nested_levels -= 1
        result.append(str(nested_levels))
print(result)