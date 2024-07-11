from typing import List


def rolling_max(input_str: str) -> List[int]:
    input_str = "".join(filter(str.isdigit, input_str))

    numbers = list(map(int, input_str.split()))

    if len(numbers) <= 1:
        return [0]

    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result