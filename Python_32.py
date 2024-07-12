def find_zero():
    while True:
        try:
            a = float(input("Enter value for a: "))
            if a == 0:
                print("Error: 'a' should not be zero. Please enter a non-zero value.")
            else:
                b = float(input("Enter value for b: "))
                return -b / a
        except ValueError:
            print("Error: Please enter a valid number.")

result = find_zero()
print(result)