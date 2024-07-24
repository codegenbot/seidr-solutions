def do_algebra(operator, operand):
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