```
def add_numbers():
    def check(func):
        num1 = input("Enter first number: ")
        num2 = input("Enter second number: ")
        try:
            return func(int(num1), int(num2))
        except ValueError:
            print("Invalid input. Please enter a number.")
    
    result = check(lambda x, y: x + y)
    print(result)

add_numbers()