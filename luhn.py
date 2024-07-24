```
def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = sum(
        2 * i if i % 2 == 0 and (i * 10) // 9 != i else i 
        for i in card_number
    ) % 10
    return str(result)