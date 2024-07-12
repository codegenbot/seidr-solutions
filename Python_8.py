def sum_product() -> tuple:
    total_sum = 0
    product = 1
    user_input = None
    
    while True:
        if user_input is not None and str(user_input).lower() == 'stop':
            break
        user_input = input("Enter a number (or 'stop' to finish): ")
        
        if user_input.isdigit():
            total_sum += int(user_input)
            product *= int(user_input)
        elif user_input.lower() != 'stop':
            print("Invalid input. Please enter a digit or type 'stop' to finish.")
    
    return total_sum, product

result = sum_product()
print("Sum: ", result[0])
print("Product: ", result[1])