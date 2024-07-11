```python
def add(x: int, y: int):
    return x + y

while True:
    try:
        num1 = int(input("Enter first number: "))
        num2 = int(input("Enter second number: "))

        result = add(num1, num2)
        print(f"Result: {result}")
        break
    except ValueError:
        print("Invalid input. Please enter integers.")