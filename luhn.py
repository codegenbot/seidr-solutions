```
def luhn(card):
    card = list(map(int, card.split()))
    result = 0
    for i in range(len(card)-1):
        temp = card[i] * 2
        if temp > 9:
            temp -= 9
        result += temp
    result += sum(card[-1:])
    return result