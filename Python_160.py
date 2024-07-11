def do_algebra(operator, operand):
    expression = ""
    for i in range(len(operator)):
        expression += str(operand[i]) + operator[i]
    expression += str(operand[-1])
    result = eval(expression)
    return result