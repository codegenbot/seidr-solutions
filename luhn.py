```
def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = sum(2*i if i % 2 == 0 else i for i in card_number)
    return str(result%10 if result > 9 else result).rjust(len(str(16*card_number[0])), '0')