def add(a: int, b: int) -> int:
    return a + b

if __name__ == "__main__":
    while True:
        try:
            print("Enter two integers to add:")
            try:
                a = int(input("Enter the first number: ").strip())
            except ValueError:
                print("Please enter integers only. Please re-enter the first number.")
                continue
            try:
                b = int(input("Enter the second number: ").strip())
            except ValueError:
                print("Please enter integers only. Please re-enter the second number.")
                continue
            result = add(a, b)
            print(f"The sum of {a} and {b} is: {result}")
            break
        except KeyboardInterrupt:
            print("\nProgram interrupted. Exiting.")
            break