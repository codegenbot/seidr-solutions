from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum = 0
    product = 1
    for num in numbers:
        sum += num
        product *= num
    return (sum, product)


input_numbers = input().split()
numbers = [int(num) for num in input_numbers]
result = sum_product(numbers)
print(result)