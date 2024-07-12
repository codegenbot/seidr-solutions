```
def sum_product() -> tuple:
    total_sum = 0
    product = 1
    count = 0

    try:
        print("Please enter a series of digits separated by spaces.")
        while True:
            user_input = input()
            if user_input.lower() == "stop":
                break
            for num in user_input.split():
                if not num.isdigit():
                    print("Invalid input. Please enter a digit or type 'stop' to finish.")
                    continue
                total_sum += int(num)
                product *= int(num)
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