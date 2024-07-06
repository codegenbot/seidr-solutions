```
result = []
nested_levels = 0
for char in input():
    if char == '(':
        nested_levels += 1
        result.append(nested_levels)
    elif char == ')':
        nested_levels -= 1
        result.append(nested_levels)
if result:  
    print([int(x) for x in result])
else:  
    print([])