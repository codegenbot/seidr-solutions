from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [sum(map(max, *zip(*[map(list, [[0]] + [list(nums) for nums in zip(*[map(list, [[i] + numbers[:i]] for i in range(len(numbers))])])])))] if i == 0 else sum(map(min, *zip(*[map(list, [[i]] + [list(nums) for nums in zip(*[map(list, [[i] + numbers[:i]] for i in range(len(numbers))])])])))) for i in range(len(numbers))])
    return result