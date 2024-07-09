```
def luhn_sum(card_number):
    card_number = list(map(int, card_number.split()))
    total = 0
    for i in range(0, len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return total