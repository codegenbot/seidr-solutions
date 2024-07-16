from typing import List, Tuple

results = []
while True:
    try:
        numbers = list(map(int, input().split()))
        result = sum_product(numbers)
        results.append(result)
    except EOFError:
        break

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

for result in results:
    print(result)