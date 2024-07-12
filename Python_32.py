def find_zero():
    try:
        a = float(input("Enter a non-zero value for 'a': "))
        while a == 0.0:
            print("Please enter a non-zero value for 'a': ")
            a = float(input())
        
        print("Enter a value for 'b': ")
        b = float(input())
        return -b / a
    except ValueError:
        print("Invalid input. Please enter a valid numeric value.")
        return None

result = find_zero()
if result is not None:
    print(result)