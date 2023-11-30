from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


if __name__ == "__main__":
    numbers = [float(num) for num in input().split()]
    result = rescale_to_unit(numbers)
    for num in result:
        print(num)