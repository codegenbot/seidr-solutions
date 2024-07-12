```Python
def sum_product() -> tuple:
    total_sum = 0
    product = 1

    while True:
        print("Enter a number (or 'stop' to finish): ")

        user_input = input()

        if user_input.lower() == "stop":
            break
        try:
            num = int(user_input)
            total_sum += num
            product *= num
        except ValueError:
            print("Invalid input. Please enter a digit or type 'stop' to finish.")

    return total_sum, product

result = sum_product()
print("Sum: ", result[0])
print("Product: ", result[1])