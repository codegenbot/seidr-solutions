def luhn(card_num):
    card_num = [int(x) for x in str(card_num).replace(" ", "").strip()]
    new_card_num = []
    for i, num in enumerate(card_num):
        if (i % 2 == 0):
            new_card_num.append(num)
        else:
            new_card_num.append((num * 2) % 10)
    return sum(new_card_num)