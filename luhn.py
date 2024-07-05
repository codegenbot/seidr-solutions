```Python
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    doubled = [i if i % 2 else i * 2 for i in card_number]
    return sum([x - 9 if x > 9 else x for x in doubled])