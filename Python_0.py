from typing import List

def has_close_elements(numbers: list[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False


numbers = input("Enter space-separated floats: ").split()
threshold = float(input("Enter the threshold value: "))

result = has_close_elements([float(num) for num in numbers], threshold)
print(result)