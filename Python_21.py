from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

if __name__ == "__main__":
    numbers = [float(x) for x in input().split()]
    print(rescale_to_unit(numbers))