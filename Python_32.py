def find_zero():
    a = float(input("Enter a non-zero value for 'a': "))
    while a == 0:
        print("Error: 'a' cannot be zero. Please enter a non-zero value.")
        a = float(input("Enter a non-zero value for 'a': "))
        
    b = float(input("Enter a value for 'b': "))
    
    return -b / a

result = find_zero()
print(result)