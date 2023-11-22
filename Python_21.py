from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]


def main():
    numbers = list(map(float, input().split()))
    result = rescale_to_unit(numbers)
    print(result)


if __name__ == "__main__":
    main()