from typing import List, Tuple


def sum_product():
    numbers = input("Enter space-separated integers: ").split()
    try:
        numbers = [int(num) for num in numbers]
        total_sum = 0
        product = 1
        for num in numbers:
            total_sum += num
            product *= num
        return total_sum, product
    except ValueError:
        print("Invalid input. Please enter integers separated by spaces.")


sum_product()