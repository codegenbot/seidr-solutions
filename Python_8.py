def sum_product() -> tuple:
    total_sum = 0
    product = 1
    count = 0

    while True:
        print("Enter a number (or 'stop' to finish): ")

        user_input = input()

        if user_input.lower() == "stop":
            break
        elif user_input.isdigit():
            total_sum += int(user_input)
            product *= int(user_input)
            count += 1
        else:
            print("Invalid input. Please enter a digit or type 'stop' to finish.")

    return total_sum, product, total_sum / count if count > 0 else 0

result = sum_product()
print("Sum: ", result[0])
print("Product: ", result[1])
print("Average: ", result[2])