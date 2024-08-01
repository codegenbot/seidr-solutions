from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = list(map(int, input().split()))
    return (sum(numbers), 0 if all(numbers) else 0 if 0 in numbers else 1)