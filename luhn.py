def luhn(card_num):
    card_num = list(map(int, card_num))
    doubled = [card_num[i] * 2 if i % 2 else card_num[i] for i in range(len(card_num))]
    sum_of_digits = sum([d - 9 if d > 9 else d for d in doubled])
    return sum_of_digits