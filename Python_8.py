from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum = 0
    product = 1
    for num in numbers:
        sum += num
        product *= num
    return (sum, product)


input_list = list(map(int, input().split()))
result = sum_product(input_list)
print(result)