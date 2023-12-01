from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    sorted_numbers = sorted(numbers)
    for i in range(len(sorted_numbers) - 1):
        if sorted_numbers[i + 1] - sorted_numbers[i] < threshold:
            return True
    return False


def main():
    n = int(input())
    numbers = []
    for _ in range(n):
        num = float(input())
        numbers.append(num)
    threshold = float(input())

    result = has_close_elements(numbers, threshold)
    print(result)


if __name__ == "__main__":
    main()