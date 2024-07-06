def calculate_total_value(num1: int, num2: str) -> float:
    total_value = num1 * len(num2)
    if "0" in num2:
        total_value += num1
    return total_value

num1 = 0  
num2 = ""  

while True:
    try:
        num1_str = input("Enter a number: ")
        
        if num1_str.lower() == 'q':
            break
        
        num1 = int(num1_str)
        
        num2 = input("Enter a string: ")

        print(calculate_total_value(num1, num2))
    except ValueError:
        print("Invalid input. Please try again.")