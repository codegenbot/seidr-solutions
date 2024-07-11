from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return total_sum, product if product != 0 else 1


input_str = input('"Please enter numbers: "')
numbers = [int(num) for num in input_str.strip().split(",")]
if len(numbers) == 0:
    print("Invalid input! Please enter comma-separated numbers.")
else:
    try:
        result = sum_product(numbers)
        total_sum, product = result
        print(f"Total sum is {total_sum} and the product is {product}.")
    except ValueError:
        print("Invalid input! Please enter comma-separated numbers.")