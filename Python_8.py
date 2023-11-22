from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (sum_val, product)

numbers = input("Enter numbers separated by space: ").split()
result = sum_product(list(map(int, numbers)))
print(result)