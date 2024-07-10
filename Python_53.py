def add(a: int, b: int) -> int:
    return a + b

if __name__ == "__main__":
    try:
        a = int(input("Enter the first number: ").strip())
        b = int(input("Enter the second number: ").strip())
        result = add(a, b)
        print(f"The sum of {a} and {b} is: {result}")
    except Exception as e:
        print("Error: Please enter valid integers.")