try:
    x = int(input("Enter the first number: "))
    y = int(input("Enter the second number: "))
except ValueError:
    print("Please enter valid integers")
    exit()

def add(x: int, y: int) -> int:
    return x + y

result = add(x, y)
print(f"The sum is: {result}")