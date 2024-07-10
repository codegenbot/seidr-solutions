def luhn(card_num):
    card_num = [int(x) for x in str(card_num).replace(" ", "").strip()]
    total_sum = 0
    for i in range(len(card_num)):
        digit = card_num[i]
        if (i % 2 == 1):
            if (digit * 2) > 9:
                total_sum += (digit * 2) - 9
            else:
                total_sum += digit * 2
        else:
            total_sum += digit

    return total_sum