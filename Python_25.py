```
from typing import list

def calculate_average(input_list: list[int]) -> float:
    if not input_list:
        return 0
    return sum(input_list) / len(input_list)