from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum = 0
    product = 1
    for num in numbers:
        sum += num
        product *= num
    return (sum, product)


if __name__ == "__main__":
    n = int(input())
    numbers = []
    for _ in range(n):
        numbers.append(int(input()))
    result = sum_product(numbers)
    print(result[0])
    print(result[1])