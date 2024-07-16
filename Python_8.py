from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

results = []

input_lines = []
while True:
    try:
        line = input().strip()
        if not line:
            break
        input_lines.append(list(map(int, line.split())))
    except EOFError:
        break

for numbers in input_lines:
    result = sum_product(numbers)
    results.append(result)

for result in results:
    print(result)