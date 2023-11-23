from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False


def main():
    try:
        numbers = [float(num) for num in input().strip().split()]
        threshold = float(input().strip())

        if not numbers:
            raise ValueError("Empty input for numbers")

        if not isinstance(threshold, float):
            raise ValueError("Invalid input for threshold")

        print(has_close_elements(numbers, threshold))
    except Exception as e:
        print("Error:", str(e))


if __name__ == "__main__":
    main()