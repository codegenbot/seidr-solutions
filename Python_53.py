def add(a: int, b: int) -> int:
    return a + b

while True:
    try:
        a, b = map(int, input("Enter two numbers separated by a space: ").split())
        result = add(a, b)
        print(result)
        break
    except ValueError:
        print("Please enter integers only. Please re-enter the numbers.")
    except KeyboardInterrupt:
        print("\nProgram interrupted. Exiting.")
        break