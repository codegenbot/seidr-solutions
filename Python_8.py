from typing import List, Tuple

if __name__ == "__main__":
    numbers = list(map(int, input().split()))
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    print((sum_result, product_result))