from typing import List


def rolling_max(input_str: str) -> List[int]:
    input_str = "".join(filter(str.isdigit, input_str))

    numbers = []
    for num in input_str.split():
        numbers.append(int(num))

    if len(numbers) <= 1:
        return [0]

    result = [max(map(int, numbers[: i + 1])) for i in range(len(numbers))]
    return result