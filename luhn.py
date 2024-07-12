```
def luhn(card):
    card = [int(x) for x in str(card)]
    checksum = 0
    for i in range(len(card)):
        if i % 2 != 0:
            checksum += card[i]
        else:
            double_digit = card[i] * 2
            if double_digit > 9:
                checksum += (double_digit - 9)
            else:
                checksum += double_digit
    return checksum