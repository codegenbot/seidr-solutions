from typing import List

def sum_product() -> List[int]:
    total_sum = 0
    product = 1
    numbers = []

    while True:
        user_input = input("Enter a number (or 'stop' to finish): ")

        if user_input.lower() == 'stop':
            break
        elif user_input.isdigit():
            num = int(user_input)
            total_sum += num
            product *= num
            numbers.append(num)
        else:
            print("Invalid input. Please enter a digit or type 'stop' to finish.")

    return [total_sum, product]

result = sum_product()
print("Sum: ", result[0])
print("Product: ", result[1])