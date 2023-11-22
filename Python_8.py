from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = 0
    product = 1
    for num in numbers:
        sum_val += num
        product *= num
    return (sum_val, product)

input_numbers = input("Enter numbers separated by commas: ")
numbers = [int(num) for num in input_numbers.split(",")]
result = sum_product(numbers)
print(result)