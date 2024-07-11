from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product if product != 0 else 1


numbers = input("Please enter numbers: ")
try:
    result = sum_product(list(map(int, numbers.split(','))))
except ValueError:
    print("Invalid input! Please enter comma-separated numbers.")
else:
    total_sum, product = result
    print(f"Total sum is {total_sum} and the product is {product}.")