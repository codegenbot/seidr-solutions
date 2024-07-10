from typing import List, Tuple


def find_closest_elements():
    first_set = input("Enter the first set of numbers (space-separated): ")
    second_set = input("Enter the second set of numbers (space-separated): ")

    first_numbers = list(map(float, first_set.split()))
    second_numbers = list(map(float, second_set.split()))

    min_diff = float("inf")
    closest_pair = (None, None)

    for num1 in first_numbers:
        for num2 in second_numbers:
            diff = abs(num1 - num2)
            if diff < min_diff:
                min_diff = diff
                closest_pair = (num1, num2)

    return tuple(sorted(closest_pair))


print(find_closest_elements())