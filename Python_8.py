from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)  
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum, product)

numbers_input = input("Enter a list of integers separated by spaces: ")
numbers_list = [int(num) for num in numbers_input.split()]

result = sum_product(numbers_list)
print(f"The sum is {result[0]} and the product is {result[1]}.")