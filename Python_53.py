def add(x: int, y: int) -> int:
    return x + y

x = int(input("Enter the first number: "))
while not isinstance(x, int):
    x = int(input("Please enter an integer value: "))

y = int(input("Enter the second number: "))
while not isinstance(y, int):
    y = int(input("Please enter an integer value: "))

result = add(x, y)
print(f"The sum is: {result}")