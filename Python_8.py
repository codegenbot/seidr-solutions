def sum_product() -> tuple:
    total_sum = 0
    product = 1
    count = 0

    try:
        user_input = int(input())
    except ValueError:
        print("Invalid input. Please enter a digit or type 'stop' to finish.")
        return 0, 1, 0

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
                return 0, 1, 0
        else:
            print("Invalid input. Please enter a digit or type 'stop' to finish.")
            return 0, 1, 0

    if count > 0:
        return total_sum, product, total_sum / count
    else:
        return total_sum, product, 0