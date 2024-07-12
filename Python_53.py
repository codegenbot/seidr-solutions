def check_numbers():
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
    
    if (num1 >=0 and isinstance(num1,int)) and (num2>=0 and isinstance(num2,int)):
        return num1 + num2
    else:
        return "Error: Please enter non-negative integers"