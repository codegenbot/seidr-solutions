def calculate_expression_value(expression: str):
    stack = []
    total = 0
    last_operator = "+"

    for char in expression:
        if char.isdigit():
            if last_operator == "+":
                stack.append(int(char))
            elif last_operator == "-":
                stack.append(-int(char))
            elif last_operator == "*":
                stack.append(stack.pop() * int(char))
            elif last_operator == "/":
                stack.append(int(stack.pop()) // int(char))
        else:
            last_operator = char

    return sum(stack)