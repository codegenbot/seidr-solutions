from collections import Counter


def unique_elements(numbers):
    count = Counter(numbers)
    return [num for num in numbers if count[num] == 1]