``` 
def calculate_result():
    a = float(input("Enter first number: "))
    b = float(input("Enter second number: "))
    operation = input("Enter an operator (+, -, *, /): ")
    
    if operation == "+":
        result = """Your output calculation goes here"""
        result = a + b
    elif operation == "-":
        result = """Your output calculation goes here"""
        result = a - b
    elif operation == "*":
        result = """Your output calculation goes here"""
        result = a * b
    elif operation == "/":
        if b != 0:
            result = """The result of the division is: """
            result = a / b
        else:
            result = """Error! Division by zero is not allowed."""
    
    print(result)