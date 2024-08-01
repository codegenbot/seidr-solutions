from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = list(map(int, input().split()))
    return (sum(numbers), 0 if not numbers or 0 in numbers else 1)