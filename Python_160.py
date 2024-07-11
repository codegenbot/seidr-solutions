def do_algebra(operator, operand):
    expression = str(operand[0])
    for i in range(len(operator)):
        expression += " " + operator[i]
        expression += " " + str(operand[i + 1])
    return eval("".join(map(str, [expression[:-2]])))