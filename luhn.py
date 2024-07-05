def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            if digit * 2 <= 9:
                result += digit * 2
            else:
                result += digit * 2 - 9
        else:
            result += digit
    return result