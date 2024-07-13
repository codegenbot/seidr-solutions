Here is the Python solution:

def luhn(card_num):
    card_num = list(map(int, card_num[1:-1].split()))
    double_even = False
    sum_of_digits = 0
    for digit in card_num:
        if double_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_of_digits += digit
        double_even = not double_even
    return str(sum_of_digits)