from typing import List


def has_close_elements(numbers_list: List[float], threshold: float) -> bool:
    for i in range(len(numbers_list)):
        for j in range(i + 1, len(numbers_list)):
            if abs(numbers_list[i] - numbers_list[j]) <= threshold:
                return True
    return False


def main():
    numbers = input()
    threshold = float(input())

    numbers_list = list(map(float, numbers.split()))

    result = has_close_elements(numbers_list, threshold)

    print(
        "The list contains close elements"
        if result
        else "The list does not contain close elements"
    )


if __name__ == "__main__":
    main()