from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    return (sum(numbers), 1 if not numbers else 1 if 0 in numbers else 0)