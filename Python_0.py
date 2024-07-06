```
from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False


if __name__ == "__main__":
    user_input = input("Enter a list of floats separated by comma, and the threshold: ")
    try:
        user_input_list = [float(x) for x in user_input.split(",")]
        threshold = float(input("Enter the threshold: "))
        print(has_close_elements(user_input_list, threshold))
    except ValueError:
        print("Invalid input. Please enter a list of floats separated by comma and a valid threshold.")