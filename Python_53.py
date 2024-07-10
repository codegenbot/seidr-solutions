def add(a: int, b: int) -> int:
    return a + b

if __name__ == "__main__":
    print("Enter two integers to add:")
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))
    result = add(a, b)
    print(f"The sum of {a} and {b} is: {result}")