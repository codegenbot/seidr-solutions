from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    num_count = {num: numbers.count(num) for num in numbers}
    return [num for num, count in num_count.items() if count == 1]