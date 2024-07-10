def luhn(card_num):
    card_num = list(map(int, str(card_num).replace(" ", "").strip().split()))
    total_sum = 0
    for i, x in enumerate(card_num):
        if (i % 2) == 1:
            double_card = x * 2
            if double_card > 9:
                total_sum += double_card - 9
            else:
                total_sum += double_card
        else:
            total_sum += x
    return total_sum % 10 == 0