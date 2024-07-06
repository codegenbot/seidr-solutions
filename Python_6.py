def nested_levels(s):
    result = []
    nested_levels = 0
    for char in s:
        if char == "(":
            nested_levels += 1
            result.append(str(nested_levels))
        elif char == ")":
            nested_levels -= 1
            result.append(str(nested_levels))
    print(result)