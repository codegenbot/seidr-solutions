def do_algebra(operator, operand):
    expr = str(operand[0])
    for op, num in zip(operator, operand[1:]):
        expr += f' {op} {num}'
    return eval(expr)