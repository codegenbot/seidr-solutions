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

# Reading input from user
operators = input().split()
operands = list(map(int, input().split()))

# Calling the function and printing the result
print(do_algebra(operators, operands))