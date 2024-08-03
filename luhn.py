```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)-1,-1,-1):
        if i % 2 == 1:
            double_digit = card_number[i] * 2
            if double_digit > 9:
                double_digit -= 9
            total += double_digit
        else:
            total += card_number[i]
    return total