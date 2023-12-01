from typing import List


def filter_integers(nums: List[str]) -> List[int]:
    return list(filter(lambda x: isinstance(x, int), map(int, nums)))