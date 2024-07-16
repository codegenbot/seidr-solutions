def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    result = sum(sum(divmod(x*2,10)) if i%2 else x for i in card_number)
    return result % 10 == 0