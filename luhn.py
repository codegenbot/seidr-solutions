Here is the completed Python code:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    new_card_number = []
    for i, digit in enumerate(card_number):
        if (i % 2) == 0:
            new_digit = digit
        else:
            new_digit = digit * 2
            if new_digit > 9:
                new_digit -= 9
        new_card_number.append(new_digit)
    return sum(new_card_number)