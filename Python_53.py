```
def add(x: int, y: int):
    return x + y

def main():
    try:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))
        result = add(x, y)
        print(f"The sum of {x} and {y} is {result}")
    except ValueError:
        print("Invalid input. Please enter integers.")

if __name__ == "__main__":
    main()