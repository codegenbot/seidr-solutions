```
from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    total_sum = 0
    product = 1
    numbers = []

    while True:
        user_input = input("Enter a number (or 'stop' to finish): ")

        if user_input.lower() == 'stop':
            break
        else:
            try:
                num = int(user_input)
                total_sum += num
                product *= num
                numbers.append(num)
            except ValueError:
                print("Invalid input. Please enter a digit or type 'stop' to finish.")

    return total_sum, product

result = sum_product()
print("Sum: ", result[0])
print("Product: ", result[1])