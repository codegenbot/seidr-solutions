import numpy as np


def luhn_algorithm(credit_card_number):
    digits = [int(digit) for digit in credit_card_number]
    sum = 0
    is_even = False
    for i in range(len(digits) - 1, -1, -1):
        if is_even:
            digits[i] *= 2
            if digits[i] > 9:
                digits[i] -= 9
        sum += digits[i]
        is_even = not is_even
    return sum