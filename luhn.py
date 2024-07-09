```
def luhn(card_num):
    card_num = list(map(int, card_num))
    for i in range(1, len(card_num), 2):
        card_num[i] *= 2
        if card_num[i] > 9:
            card_num[i] -= 9
    return card_num[-1] if sum(card_num) % 10 != 0 else 0