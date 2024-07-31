from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [
        max(i)
        for i in zip(
            *[
                [(j + 1) ** i[0] for j in range(len(numbers))]
                for i in enumerate(numbers)
            ]
        )
    ]
    return result