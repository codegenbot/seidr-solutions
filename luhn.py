Here is the solution:

def luhn(card_num):
    card_num = list(map(int, str(card_num).split()))
    double_sum = 0
    for i in range(len(card_num)):
        if i % 2 == 1:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        double_sum += card_num[i]
    return double_sum