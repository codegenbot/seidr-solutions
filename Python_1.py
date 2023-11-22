def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group_start = 0

    for i, char in enumerate(paren_string):
        if char == "(":
            stack.append(i)
        elif char == ")":
            if stack:
                start = stack.pop()
                groups.append(paren_string[start : i + 1])

    return groups


paren_string = input("Enter the parentheses string: ")
result = separate_paren_groups(paren_string)
print(result)