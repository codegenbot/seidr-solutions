from typing import List

def has_close_elements():
    numbers_str = input("Enter a list of numbers (space-separated): ")
    numbers = [float(x) for x in numbers_str.split()]

    threshold_str = input("Enter the threshold value: ")
    threshold = float(threshold_str)

    result = has_close_elements(numbers, threshold)

    print(f"Result: {result}")

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False

if __name__ == "__main__":
    has_close_elements()