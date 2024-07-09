"""
def luhn(card_num):
    card_num = list(map(int, card_num))
    double_digit_sum = 0
    for i in range(1, len(card_num), 2):
        double_digit_sum += card_num[i] * 2 // 10 + (card_num[i] * 2) % 10
    if sum(card_num) % 2:
        double_digit_sum += 9 - (double_digit_sum % 9)
    return double_digit_sum % 10 == 0