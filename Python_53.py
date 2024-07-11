```
def main():
    print("Simple Calculator Program")
    print("1. Addition")
    print("2. Exit")

while True:
    choice = int(input("Enter your choice: "))
    if choice == 1:
        x = int(input("Enter first number: "))
        y = int(input("Enter second number: "))

        def add(x: int, y: int):
            return x + y

        result = add(x, y)
        print(f"The sum of {x} and {y} is {result}")
    elif choice == 2:
        break
    else:
        print("Invalid choice. Please enter 1 or 2.")