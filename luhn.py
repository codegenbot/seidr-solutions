```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    doubled_sum = 0
    for i in range(1, len(card_number), 2):
        card_number[i] *= 2
        if card_number[i] > 9:
            card_number[i] -= 9
        doubled_sum += card_number[i]
    return sum(card_number) - doubled_sum