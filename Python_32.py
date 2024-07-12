def find_zero():
    while True:
        try:
            a = float(input("Enter a non-zero value for 'a': "))
            if a != 0:
                break
            else:
                print("Please enter a non-zero value for 'a'.")
        except ValueError:
            print("Invalid input. Please enter a valid numeric value.")
    
    while True:
        try:
            b = float(input("Enter a value for 'b': "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid numeric value.")
    
    return -b / a

result = find_zero()
print(result)