def sum_product() -> tuple:
    total_sum = 0
    product = 1
    count = 0

    try:
        user_input = int(input())
    except ValueError:
        print("Invalid input. Please enter a digit or type 'stop' to finish.")
        user_input = int(input())

    while True:
        if str(user_input).lower() == "stop":
            break
        elif user_input.isdigit():
            total_sum += user_input
            product *= user_input
            count += 1
            try:
                user_input = int(input())
            except ValueError:
                print("Invalid input. Please enter a digit or type 'stop' to finish.")
                user_input = int(input())
        else:
            print("Invalid input. Please enter a digit or type 'stop' to finish.")
            user_input = int(input())

    if count > 0:
        return total_sum, product, total_sum / count
    else:
        return total_sum, product, 0

result = sum_product()
print("Sum: ", result[0])
print("Product: ", result[1])
print("Average: ", result[2])