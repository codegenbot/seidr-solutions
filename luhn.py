def luhn(card_number):
    sum = 0
    for i, digit in enumerate(map(int, card_number)):
        if (i % 2 == 0 and int(digit) * 2 >= 10):
            sum += int(digit) * 2 - 9
        elif i % 2 == 0:
            sum += int(digit) * 2
        else:
            sum += int(digit)
    return sum