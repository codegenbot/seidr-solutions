def do_algebra(operator, operand):
    expression = ""
    for i in range(len(operator)):
        expression += str(operand[i])
        if i < len(operator) - 1:
            expression += operator[i]
    return eval(
        "{" + "0" * (len(expression) // 4) + "}".join(map(str, [expression]))[::2] + ")"
    )