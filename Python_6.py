```python
def get_max_nesting(paren_string: str) -> int:
    stack = []
    max_nesting = -1

    for char in paren_string:
        if char == "(":
            stack.append(char)
            max_nesting = max(max_nesting, len(stack))
        elif char == ")":
            if stack:
                stack.pop()
            else:
                return -1

    if stack:
        return -1

    return max_nesting

def check(func):
    sample_input = "((()))"
    expected_output = 3

    result = func(sample_input)
    if result == expected_output:
        print("Function implementation is correct!")
    else:
        print("Function implementation is incorrect!")

check(get_max_nesting)