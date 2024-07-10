def add(a: int, b: int) -> int:
    return a + b


while True:
    try:
        a = int(input("Enter the first number: "))
        b = int(input("Enter the second number: "))
        result = add(a, b)
        print(result)
        break
    except ValueError:
        print("Please enter integers only. Please re-enter the numbers.")
    except KeyboardInterrupt:
        print("\nProgram interrupted. Exiting.")
        break