```
def find_closest_elements():
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    closest = abs(num1 - num2)
    
    if num1 > num2:
        num2 += closest
    else:
        num1 += closest
    
    return (num1, num2)

print(find_closest_elements())