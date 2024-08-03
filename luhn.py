def luhn(card_num):
    card_num = list(map(int, input().split()))
    sum_check = 0
    for i in range(len(card_num) - 1):
        if i % 2 == 0:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        sum_check += card_num[i]
    return sum_check + card_num[-1]


print(luhn([16]))