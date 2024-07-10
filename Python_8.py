```
from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("All elements must be integers")
        total_sum += num
        product *= num
    return (total_sum, product) if numbers else (0, 1)

if __name__ == "__main__":
    try:
        input_numbers = list(map(int, input("Enter numbers separated by space: ").split()))
        result = sum_product(input_numbers)
        print(f"Sum: {result[0]}, Product: {result[1]}")
    except ValueError as e:
        print(e)