```
def luhn(card):
    card = [int(x) for x in str(card).replace(" ", "") if x.isdigit()]
    if len(card) < 15:
        return sum(card)
    card += [0] * (16 - len(card))
    for i in range(len(card)-1, 0, -2):
        temp = card[i] * 2
        card[i] = temp - (temp // 10) * 10 if temp > 9 else temp
    return sum(card)