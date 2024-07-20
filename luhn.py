```
def luhn():
    card = [int(x) for x in str(input().replace(" ", "")) if isinstance(int(x), int)]
    if len(card) < 15:
        return sum(card)
    card += [0] * (16 - len(card))
    for i in range(len(card)-1, 0, -2):
        temp = card[i] * 2
        card[i] = (temp // 2) + (temp % 2)
    return sum(card)