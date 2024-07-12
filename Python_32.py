def find_zero():  
    a = 1  
    while a != 0.0:    
        try:      
            a = float(input("Enter a non-zero value for a (a cannot be zero): "))    
        except ValueError:      
            print("Invalid input. Please enter a valid number.")  
    try:    
        b = float(input("Enter value for b: "))  
    except ValueError:    
        print("Invalid input for b. Please enter a valid number.")  
    return -b / a

result = find_zero()
print(result)