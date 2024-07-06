from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return (total_sum, product)

numbers = [int(x) for x in input("Enter space-separated numbers: ").split()]
result = sum_product(numbers)
print(result)