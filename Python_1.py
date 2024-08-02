def calculate_expression_value(expression: str) -> int:
    result = 0
    sign = 1
    stack = []

    for char in expression:
        if char.isdigit():
            result += sign * int(char)
        elif char == "+":
            sign = 1
            stack.append(result)
            result = 0
        elif char == "-":
            sign = -1
            stack.append(result)
            result = 0

    stack.append(result)
    return sum(stack)