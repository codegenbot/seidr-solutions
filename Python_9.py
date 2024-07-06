```Python
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(sum(sublist) for sublist in ([numbers[0]], zip(*[map(list, [[i] + numbers[:i]] for i in range(1, len(numbers)))]))) if i == 0 else max(i+sum(map(min, *zip(*[map(list, [[i] + numbers[:i]] for i in range(len(numbers))])])) for i in range(len(numbers)))]
    return result