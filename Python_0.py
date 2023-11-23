from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

try:
    numbers = [float(num) for num in input("Enter numbers separated by spaces: ").strip().split()]
    threshold = float(input("Enter threshold value: "))
    print(has_close_elements(numbers, threshold))
except Exception as e:
    print("Error:", str(e))