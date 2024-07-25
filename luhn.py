```
def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    sum_digits = 0
    for i in range(len(card_number)):
        if (i % 2) == 1:
            double_digit = card_number[i] * 2
            if double_digit > 9:
                double_digit -= 9
            sum_digits += double_digit
        else:
            sum_digits += card_number[i]
    return sum_digits