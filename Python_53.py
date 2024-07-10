def add(a: int, b: int) -> int:
    return a + b

while True:
    try:
        a = int(input("Enter the first number: "))
    except ValueError:
        print("Please enter integers only.")
        continue

    try:
        b = int(input("Enter the second number: "))
        result = add(a, b)
        print(result)
        break
    except ValueError:
        print("Please enter integers only.")
    except KeyboardInterrupt:
        print("\nProgram interrupted. Exiting.")
        break