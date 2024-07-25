from typing import List


def rolling_max(numbers: List[List[int]]) -> List[int]:
    if not numbers:
        return []

    result = [max(lst) for lst in numbers]
    max_val = result[0]
    output = [max_val]

    for num_list in numbers[1:]:
        new_max = max(num_list)
        output.append(max(new_max, max_val))

    return output


print(rolling_max([[-5], [-2], [0], [3], [-1], [10]]))