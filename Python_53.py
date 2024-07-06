```
def add(x: int, y: int):
    return x + y

num1 = 0  
num2 = 0  

while True:
    try:
        num1_str = input("Enter first number (or 'q' to quit): ")
        
        if num1_str.lower() == 'q':
            break
        
        while True:
            try:
                num1 = int(num1_str)
                break
            except ValueError:
                print("Invalid input. Please enter a valid number.")
                num1_str = input("Enter first number (or 'q' to quit): ")
        
        num2_str = input("Enter second number: ")
        
        if num2_str.lower() == 'q':
            break

        while True:
            try:
                num2 = int(num2_str)
                break
            except ValueError:
                print("Invalid input. Please enter a valid number.")
                num2_str = input("Enter second number: ")

        print(add(num1, num2))
    except ValueError:
        print("Invalid input. Please try again.")