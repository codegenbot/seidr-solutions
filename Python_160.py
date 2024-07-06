def do_algebra(operator, operand):
    expression = ""
    for i in range(len(operator)):
        expression += str(operand[i])
        if i < len(operator) - 1:
            expression += operator[i]
    return eval("".join(map(str, [str(operand[0])] + expression.split(operator[-1]))))