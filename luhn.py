```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)-1, -1, -1):
        if (i) % 2 == 0:
            total += card_number[i]
        else:
            doubled_digit = int(str(card_number[i]) * 2)
            if doubled_digit > 9:
                doubled_digit -= 9
            total += doubled_digit
    return total