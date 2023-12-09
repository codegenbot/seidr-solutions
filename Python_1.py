```
def separate_paren_groups(paren_string: str) -> list:
    groups = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            current_group += char
        elif char == ")":
            if len(current_group) > 0 and current_group[-1] == "(":
                groups.append(current_group)
                current_group = ""
    return groups
```