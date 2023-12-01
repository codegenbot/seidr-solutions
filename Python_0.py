from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    sorted_numbers = sorted(numbers)
    for i in range(len(sorted_numbers) - 1):
        if sorted_numbers[i+1] - sorted_numbers[i] < threshold:
            return True
    return False

numbers_input = input("Enter a list of numbers, separated by spaces: ")
threshold_input = input("Enter the threshold value: ")

numbers = [float(num) for num in numbers_input.split()]
threshold = float(threshold_input)

result = has_close_elements(numbers, threshold)
print(result)