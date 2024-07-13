```
def luhn(card_num):
    total = 0
    for i, digit in enumerate(reversed(card_num)):
        if i % 2 == 0:
            total += int(digit)
        else:
            double_digit = int(digit) * 2
            if double_digit > 9:
                total += (double_digit - 9)
            else:
                total += double_digit
    return total