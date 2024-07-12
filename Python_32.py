def find_zero():
    a = float(input("Enter a non-zero value for a (a cannot be zero): "))
    while a == 0:
        print("Error: 'a' should not be zero. Please enter a non-zero value for a.")
        a = float(input("Enter a non-zero value for a (a cannot be zero): "))

    b = 0
    while True:
        try:
            b = float(input("Enter value for b: "))
            break
        except ValueError:
            print("Error: Please enter a valid number.")

    return -b / a

result = find_zero()
print(result)