def do_algebra(operator, operand):
    result = operand[0]
    for i in range(1, len(operand)):
        if operator[i-1] == '+':
            result += operand[i]
        elif operator[i-1] == '-':
            result -= operand[i]
        elif operator[i-1] == '*':
            result *= operand[i]
        elif operator[i-1] == '//':
            result //= operand[i]
        elif operator[i-1] == '**':
            result **= operand[i]
    return result

# Test the function
operator = ['+', '*', '-']
operand = [2, 3, 4, 5]
print(do_algebra(operator, operand))