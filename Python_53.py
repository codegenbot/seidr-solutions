def add(x: int, y: int):
    if x > y:
        return f"The sum of {x} and {y} is {x + y}"
    else:
        return f"The sum of {y} and {x} is {x + y}"


num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print(add(num1, num2))