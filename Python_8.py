from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = 0
    product_result = 1

    for num in numbers:
        sum_result += num
        product_result *= num

    return sum_result, product_result


input_str = input("Enter space-separated numbers: ")
numbers = list(map(int, input_str.split()))

result = sum_product(numbers)
print(f"{result[0]}, {result[1]}")