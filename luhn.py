```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    sum = 0
    for i in range(len(card_num)):
        if (i % 2 == 1):
            double = card_num[i] * 2
            sum += 9 if double > 9 else double
        else:
            sum += card_num[i]
    return sum