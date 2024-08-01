from typing import List, Tuple

def sum_product() -> Tuple[int, int]:
    numbers = list(map(int, input().split()))
    return (sum(numbers), 1 if 0 not in numbers else 0)