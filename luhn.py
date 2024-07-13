```
def luhn(card):
    card = [int(x) for x in str(card)]
    checksum = sum([card[i] if i % 2 == 0 
                    else ((card[i] * 2) % 10 + 9) if (card[i] * 2) > 9 else (card[i] * 2) % 10
                   for i in range(len(card))])
    return checksum