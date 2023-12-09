def do_algebra(operator, operand):
    result = 0
    for i in range(len(operand)):
        if operator[i] == '+':
            result += operand[i]
        elif operator[i] == '-':
            result -= operand[i]
        elif operator[i] == '*':
            result *= operand[i]
        elif operator[i] == '/':
            result //= operand[i]
        elif operator[i] == '**':
            result **= operand[i]
    return result