def find_zero():
    while True:
        try:
            a = float(input("Enter a non-zero value for 'a': "))
            if a != 0.0:
                break
            print("Please enter a non-zero value for 'a'.")
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    try:
        b = float(input("Enter a value for 'b': "))
    except ValueError:
        print("Invalid input for 'b'. Please enter a valid number.")
    
    return -b / a

result = find_zero()
print(result)