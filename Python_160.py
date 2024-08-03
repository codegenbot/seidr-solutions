def do_algebra(operator, operand):
    expression = ""
    for i in range(len(operator)):
        expression += str(operand[i])
        if i < len(operator) - 1:
            expression += operator[i]
    return eval(
        "".join(map(str, [expression[:1]] + list(map(str, map(int, expression[1:])))))
    )