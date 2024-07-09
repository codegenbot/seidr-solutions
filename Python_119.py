```python
def match_parens(lst):
    stack = []
    for s in lst:
        found_open = False
        for char in s:
            if char == "(":
                stack.append(char)
                found_open = True
            elif char == ")":
                if len(stack) == 0:
                    return "No"
                else:
                    stack.pop()
        if found_open and len(stack) > 0:
            return "No"
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"