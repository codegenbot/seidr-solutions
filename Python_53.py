```
def add(x: int, y: int):
    total = x + y
    return total

while True:
    num1 = int(input("Enter first number (or -1 to quit): "))
    if num1 == -1:
        break
    num2 = int(input("Enter second number: "))
    
    print(f"The sum of {num1} and {num2} is {add(num1, num2)}")