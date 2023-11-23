def calculate_sum():
    while True:
        try:
            x = int(input("Enter the first integer: "))
            y = int(input("Enter the second integer: "))
            break
        except ValueError:
            print("Invalid input. Please enter two integers.")

    return x + y

result = calculate_sum()
print(result)