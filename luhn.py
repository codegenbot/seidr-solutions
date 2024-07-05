```
`def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    doubled = [i*2 if i % 2 != 0 else i for i in card_number]
    return sum([x - 9 if x > 9 else x for x in doubled])`