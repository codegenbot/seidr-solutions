from typing import List


def find_average(input_list: List[int]) -> float:
    if len(input_list) == 0:
        return 0
    else:
        return sum(input_list) / len(input_list)