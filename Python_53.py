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
        
        num1 = int(num1_str)
        
        choice = input("Do you want to add another number? (y/n): ")
        
        while True:
            if choice.lower() != 'y' and choice.lower() != 'n':
                print("Invalid input. Please try again.")
                choice = input("Do you want to add another number? (y/n): ")
            else:
                break
        
        if choice.lower() == 'q':
            break
        
        num2_str = input("Enter second number: ")
        
        while True:
            if num2_str.lower() == 'q':
                break
            try:
                num2 = int(num2_str)
                print(add(num1, num2))
                break
            except ValueError:
                print("Invalid input. Please try again.")
                num2_str = input("Enter second number: ")
    except ValueError:
        print("Invalid input. Please try again.")