def add(a: int, b: int) -> int:
    return a + b


if __name__ == "__main__":
    while True:
        try:
            a = int(input("Enter the first number (integer only): "))
            b = int(input("Enter the second number (integer only): "))
            result = add(a, b)
            print(result)
            break
        except ValueError:
            print("Please enter integers only. Please re-enter the numbers.")
        except KeyboardInterrupt:
            print("\nProgram interrupted. Exiting.")