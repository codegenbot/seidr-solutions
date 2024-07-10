def add(a: int, b: int) -> int:
    return a + b


if __name__ == "__main__":
    while True:
        try:
            print("Enter two integers to add:")
            a = int(input("Enter the first number: ").strip())
            b = int(input("Enter the second number: ").strip())
            result = add(a, b)
            print(f"The sum of {a} and {b} is: {result}")
            break
        except ValueError:
            print("Please enter integers only. Please re-enter the numbers.")
            continue
        except KeyboardInterrupt:
            print("\nProgram interrupted. Exiting.")
            break