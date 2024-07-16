from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

results = []

try:
    while True:
        try:
            numbers = list(map(int, input().split()))
            if not numbers:
                break
            result = sum_product(numbers)
            results.append(result)
        except (ValueError, EOFError):
            break
except EOFError:
    pass

for result in results:
    print(result)