```
def find_closest_elements():
    num1 = float(input("Enter the first number: "))
    num2 = float(input("Enter the second number: "))
    num3 = float(input("Enter the third number: "))
    
    return min(num1, num2, num3), max(num1, num2, num3)

print(find_closest_elements())