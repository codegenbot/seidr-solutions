```
def luhn(card_number):
    card_num = list(map(int, input().split()))
    sum = 0
    for i in range(len(card_num)):
        if i % 2 == 1:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        sum += card_num[i]
    return sum