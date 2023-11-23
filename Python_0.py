from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False


if __name__ == "__main__":
    try:
        n = int(input("Enter the number of elements: "))
        numbers = [float(input(f"Enter element {i+1}: ")) for i in range(n)]
        threshold = float(input("Enter the threshold value: "))

        print(has_close_elements(numbers, threshold))
    except ValueError:
        print("Invalid input. Please enter valid numbers.")