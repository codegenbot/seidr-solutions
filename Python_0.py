```
from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False

threshold = float(input("Enter the threshold value: "))
print(has_close_elements([float(x) for x in input("Enter space separated numbers: ").split()], threshold))