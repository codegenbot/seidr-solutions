from typing import List, Tuple

def find_max_min(input_list: List[int]) -> Tuple[int, int]:
    maximum = max(input_list)
    minimum = min(input_list)
    return (maximum, minimum)