from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product


input_numbers = input("Enter a list of integers separated by spaces: ")
numbers_list = list(map(int, input_numbers.split()))
result = sum_product(numbers_list)
print(result)