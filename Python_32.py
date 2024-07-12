def find_zero():
    a = 0
    while True:
        try:
            a = float(input("Enter a non-zero value for a: "))
            if a == 0:
                print("Error: 'a' should not be zero. Please enter a non-zero value for a.")
        except ValueError:
            print("Error: Please enter a valid number.")
        if a != 0:
            break
            
    b = float(input("Enter value for b: "))
    
    try:
        return -b / a
    except ZeroDivisionError:
        return "Error: Division by zero occurred."

result = find_zero()
print(result)