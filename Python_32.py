def find_zero():
    a = float(input("Enter the value for 'a': "))
    while a == 0.0:
        a = float(input("Value of 'a' cannot be 0. Please enter a non-zero value: "))
    
    b = float(input("Enter the value for 'b': "))
    return -b / a

result = find_zero()
print(result)