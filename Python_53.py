def add(x: int, y: int) -> int:
    result = input("Type 'y' to add numbers, anything else to quit: ")
    if result.lower() != "y":
        print("Goodbye!")
        return
    x = int(input("Enter first integer: "))
    y = int(input("Enter second integer: "))
    print(f"The sum of {x} and {y} is {x + y}")