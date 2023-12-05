```python
def separate_paren_groups(paren_string: str) -> list[str]:
    separated_groups = []
    for i, char in enumerate(paren_string):
        if char == '(':
            separated_groups.append([char])
        elif char == ')':
            separated_groups[-1].append(char)
            num_left = len([c for c in separated_groups[-1] if c == '('])
            num_right = len([c for c in separated_groups[-1] if c == ')'])
            if num_left != num_right:
                raise ValueError("Unbalanced parentheses")
        elif char.isspace():
            continue
        else:
            separated_groups[-1].append(char)
    return separated_groups
```