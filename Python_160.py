def do_algebra(operator, operand):
    expression = ""
    for i in range(len(operator)):
        expression += str(operand[i])
        expression += operator[i]
    expression += str(operand[-1])
    return eval(expression)