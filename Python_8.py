from typing import Tuple


def sum_product():
    try:
        numbers = list(map(int, input("Enter space-separated numbers: ").split()))
        if len(numbers) < 1:
            print("Please enter at least one number.")
        else:
            total_sum = sum(numbers)
            product = 1
            for num in numbers:
                product *= num
            return total_sum, product
    except ValueError:
        print("Invalid input. Please enter integers separated by spaces.")