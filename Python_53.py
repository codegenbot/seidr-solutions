```
def add(x: int, y: int):
    while x > y:
        print(f"{x} is greater than {y}")
        z = input("Press Enter to continue: ")
        if z == "q":
            break
        x -= 1
    else:
        print(f"{x} is not greater than {y}")

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print(add(num1, num2))