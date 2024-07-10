def add(a: int, b: int) -> int:
    return a + b

if __name__ == "__main__":
    try:
        a, b = map(int, input("Enter two numbers separated by space: ").split())
        result = add(a, b)
        print(f"The sum of {a} and {b} is: {result}")
    except ValueError:
        print("Error: Please enter two valid integers separated by space.")