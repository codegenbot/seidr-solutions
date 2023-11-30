from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = 0
    product_result = 1
    for number in numbers:
        sum_result += number
        product_result *= number
    return sum_result, product_result


if __name__ == '__main__':
    numbers = [int(input()) for _ in range(int(input()))]
    result = sum_product(numbers)
    print(result)