from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False


try:
    numbers = input("Enter space-separated numbers for numbers: ").split()
    numbers = [float(num) for num in numbers]
    threshold = float(input("Enter a threshold: "))
    print(has_close_elements(numbers, threshold))
except Exception as e:
    print("Error:", str(e))