def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum(sum(divmod(d * 2, 10)) + d for d in card_number[::-1]) % 10
    return "0" if result == 0 else "9"