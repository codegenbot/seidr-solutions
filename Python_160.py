def do_algebra(operator, operand):
    expression = str(operand[0])
    for op, num in zip(operator, operand[1:]):
        expression += f' {op} {num}'
    return eval(expression)