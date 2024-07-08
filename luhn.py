```
def luhn(card):
    card = [int(x) for x in str(card)]
    sum_of_odd_digits = sum([card[i] for i in range(len(card)-1) if (i+1) % 2 == 0])
    for i, digit in enumerate(reversed(card[:-1])):
        if i % 2 == 0:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_of_odd_digits += digit
    return sum_of_odd_digits