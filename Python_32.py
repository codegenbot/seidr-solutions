def find_zero():
    while True:
        try:
            a = float(input("Enter a non-zero value for a: "))
            if a == 0:
                print("Error: 'a' should not be zero. Please enter a non-zero value for a.")
            else:
                b = float(input("Enter value for b: "))
                return -b / a if a != 0 else "Error: Division by zero is not allowed."
        except ValueError:
            print("Error: Please enter a valid number.")
        except ZeroDivisionError:
            print("Error: Division by zero is not allowed.")

result = find_zero()
print(result)