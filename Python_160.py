def do_algebra(operator, operand):
    if len(operand) < 2 or len(operator) != len(operand) - 1:
        raise ValueError("Invalid input")

    result = operand[0]

    for i in range(len(operator)):
        if operator[i] == "+":
            result += operand[i + 1]
        elif operator[i] == "-":
            result -= operand[i + 1]
        elif operator[i] == "*":
            result *= operand[i + 1]
        elif operator[i] == "//":
            result //= operand[i + 1]
        elif operator[i] == "**":
            result **= operand[i + 1]

    return result