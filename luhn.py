```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    checksum = sum(sum(map(int, str(digit*2)))-9 if (int)(digit*2) > 9 else digit*2 for i,digit in enumerate(reversed(card_number)[1:]) ) + sum(reversed(card_number))[:1]
    return 10 - (checksum % 10) if checksum % 10 != 0 else 0