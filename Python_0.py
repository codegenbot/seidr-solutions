from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False


try:
    numbers, threshold = input("Enter space-separated numbers for numbers and threshold: ").split()
    print(has_close_elements(list(map(float, numbers)), float(threshold)))
except Exception as e:
    print("Error:", str(e))