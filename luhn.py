def luhn(card_num):
    card_num = list(map(int, input().split()))
    sum_of_digits = 0
    for i in range(1, len(card_num), 2):
        doubled = card_num[i] * 2
        if doubled > 9:
            doubled -= 9
        sum_of_digits += doubled
    for i in range(0, len(card_num), 2):
        sum_of_digits += card_num[i]
    return sum_of_digits