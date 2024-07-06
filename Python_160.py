def do_algebra(operator, operand):
    result = None
    for i in range(len(operator)):
        if operator[i] == "+":
            result = operand[i] + operand[i + 1]
        elif operator[i] == "-":
            result = operand[i] - operand[i + 1]
        elif operator[i] == "*":
            result = operand[i] * operand[i + 1]
        elif operator[i] == "/":
            result = operand[i] // operand[i + 1]
        elif operator[i] == "**":
            result = operand[i] ** operand[i + 1]
    return result