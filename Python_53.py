def add(a, b):
    return a + b

try:
    num1_str = input("Enter first number: ")
    num2_str = input("Enter second number: ")
    
    if num1_str.isdigit() and num2_str.isdigit():
        num1 = int(num1_str)
        num2 = int(num2_str)
        result = add(num1, num2)
        print(result)
    else:
        raise ValueError

except ValueError:
    print("Please enter valid integers for both numbers.")