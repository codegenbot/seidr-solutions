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
        
        if num1_str.lower() != 'q': 
            num1 = int(num1_str)

        if num1 != 0:  
            num2_str = input("Enter second number: ")
            
            if num2_str.lower() == 'q':
                break
            
            if num2_str.lower() != 'q': 
                num2 = int(num2_str)

        print(add(num1, num2))
    except ValueError:
        print("Invalid input. Please try again.")