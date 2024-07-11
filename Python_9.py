from typing import List


def rolling_max():
    T = int(input("Enter number of test cases: "))
    result = []
    for _ in range(T):
        numbers = list(map(int, input("Enter numbers separated by space: ").split()))
        if not numbers:
            result.append([])
        else:
            temp = [sum(numbers[: i + 1]) for i in range(len(numbers))]
            result.append(temp)
    return result