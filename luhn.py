def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    check_digit = int(str(card_number[0]))
    card_number = card_number[1:]

    result = sum(sum(divmod(d * 2, 10)) + d for d in card_number)
    return (result + check_digit) % 10 == 0