def sum_product() -> tuple:
    total_sum = 0
    product = 1
    count = 0

    try:
        while True:
            if not count:  
                while True:
                    user_input = input("Please enter a digit or type 'stop' to finish. ")
                    if str(user_input).lower() == "stop":
                        break
                    elif not user_input.isdigit():
                        print("Invalid input. Please enter a digit or type 'stop' to finish.")
                    else:
                        total_sum += int(user_input)
                        product *= int(user_input)
                        count = 1
                        break
            else:
                while True:
                    user_input = int(input())
                    if str(user_input).lower() == "stop":
                        break
                    elif not user_input.isdigit():
                        print("Invalid input. Please enter a digit or type 'stop' to finish.")
                    else:
                        total_sum += user_input
                        product *= user_input
                        count += 1

    except ValueError:
        print("Invalid input. Please enter a digit or type 'stop' to finish.")

    if count > 0:
        return total_sum, product, total_sum / count
    else:
        return total_sum, product, 0

result = sum_product()
print("Sum: ", result[0])
print("Product: ", result[1])
print("Average: ", result[2])