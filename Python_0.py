import math


def has_close_elements(numbers, threshold):
    numbers.sort()
    for i in range(1, len(numbers)):
        if math.fabs(numbers[i] - numbers[i - 1]) < threshold:
            return True
    return False