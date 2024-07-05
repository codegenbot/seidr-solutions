def add(x: int, y: int):
    return x + y


if __name__ == "__main__":
    while True:
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))
        result = add(num1, num2)
        print(result)