def calculator():
    num1 = float(input("Enter the first number: "))
    op = input("Enter an operator (+, -, *, /): ")
    num2 = float(input("Enter the second number: "))

    if op == "+":
        return num1 + num2
    elif op == "-":
        return num1 - num2
    elif op == "*":
        return num1 * num2
    elif op == "/":
        if num2 != 0:
            return num1 / num2
        else:
            return "Error: Division by zero"
    else:
        return "Error: Invalid operator"