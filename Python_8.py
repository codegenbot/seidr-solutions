from typing import List, Tuple


def sum_product():
    numbers = input("Enter the numbers separated by space: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid input. Please enter numbers.")
        return

    if not numbers:
        return 0, 1
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product


print(sum_product())