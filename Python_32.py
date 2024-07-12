def find_zero():
    a = 0
    while a == 0:
        try:
            a = float(input("Enter a non-zero value for 'a': "))
            if a == 0:
                print("Error: 'a' should not be zero. Please enter a non-zero value for 'a'.")
        except ValueError:
            print("Error: Please enter a valid number.")

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