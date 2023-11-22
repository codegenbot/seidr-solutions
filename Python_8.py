from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    input_numbers = input("Enter numbers separated by space: ")
    numbers = [int(num) for num in input_numbers.split()]
    sum_val = 0
    product = 1
    for num in numbers:
        sum_val += num
        product *= num
    return (sum_val, product)

result = sum_product([])
print(result)