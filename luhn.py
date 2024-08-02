def luhn(card):
    total = 0
    for i in range(15, -1, -1):
        if i % 2 == 1:
            card_num = int(str(card)[i])
            card_num *= 2
            if card_num > 9:
                card_num -= 9
            total += card_num
        else:
            total += int(str(card)[i])
    return total