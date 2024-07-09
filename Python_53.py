def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input("Enter first number: "))
    y = int(input("Enter second number: ")
except ValueError:
    print("Please enter valid integers for x and y.")
    
print(add(x, y))