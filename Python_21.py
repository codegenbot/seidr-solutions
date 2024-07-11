from typing import List


def rescale_to_unit(numbers: List[List[float]]) -> List[List[float]]:
    if not numbers:
        return []

    result = []
    for sublist in numbers:
        min_val = min(sublist)
        max_val = max(sublist)

        if min_val == max_val:
            result.append([1.0] * len(sublist))
        else:
            result.append([(x - min_val) / (max_val - min_val) for x in sublist])

    return result