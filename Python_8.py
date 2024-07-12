def sum_product() -> tuple:
    total_sum = 0
    product = 1
    user_input = int(input("Enter a number: "))

    while True:
        if str(user_input).lower() == 'stop':
            break
        elif user_input.isdigit():
            total_sum += user_input
            product *= user_input
        else:
            print("Invalid input. Please enter a digit or type 'stop' to finish.")
        user_input = int(input("Enter a number (or 'stop' to finish): "))

    return total_sum, product

result = sum_product()
print("Sum: ", result[0])
print("Product: ", result[1])