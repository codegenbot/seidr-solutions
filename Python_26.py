from collections import Counter


def unique_numbers(numbers):
    counts = Counter(numbers)
    return [num for num in numbers if counts[num] == 1]