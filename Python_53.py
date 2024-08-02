```
def add(x: int, y: int):
    return x + y

while True:
    num1 = int(input("Enter first number: "))
    op = input("Enter operator (+|-|*|/): ")
    num2 = int(input("Enter second number: "))

    if op == "+":
        print("Result:", add(num1, num2))
    elif op in {"-", "*","/"}:
        if op == "-":
            print("Result:", num1 - num2)
        elif op == "*":
            print("Result:", num1 * num2)
        elif op == "/":
            if num2 != 0:
                print("Result:", num1 / num2)
            else:
                print("Error! Division by zero is not allowed.")
    else:
        print("Invalid operator!")

    cont = input("Do you want to continue? (yes/no): ")
    if cont.lower() != "yes":
        break