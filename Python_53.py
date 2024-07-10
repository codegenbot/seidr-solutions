def add(a: int, b: int) -> int:
    return a + b


if __name__ == "__main__":
    while True:
        try:
            a = int(input("Enter the first number: ").strip())
            b = int(input("Enter the second number: ").strip())
            result = add(a, b)
            print(f"The sum of {a} and {b} is: {result}")
            break
        except ValueError:
            print("Error: Please enter valid integers.")