```
def add(x: int, y: int):
    return x + y

def main():
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
    result = add(num1, num2)
    print(f"The sum is {result}")

if __name__ == "__main__":
    main()