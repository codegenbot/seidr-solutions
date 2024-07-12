```
def luhn(card):
    card = [int(x) for x in str(card)]
    checksum = sum([sum(divmod(i * 2, 10)) if i % 2 != 0 else i for i in range(len(card))])
    return checksum