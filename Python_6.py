def check(func):
    paren_string = input()
    result = func(paren_string)
    print(result)

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

check(get_max_nesting)