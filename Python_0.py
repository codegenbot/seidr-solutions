from typing import List


def has_close_elements():
    numbers = list(map(float, input("Enter space-separated float numbers: ").split()))
    threshold = float(input("Enter a threshold value: "))

    result = has_close_elements(numbers, threshold)

    print(
        "The list contains close elements" if result else "The list does not contain close elements"
    )


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False


has_close_elements()