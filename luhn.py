def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    new_card_num = []

    for i in range(len(card_num)):
        if i % 2 == 0:
            new_card_num.append(card_num[i])
        else:
            new_card_num.append(card_num[i] * 2)

    return sum([int(x) // 10 + int(x) % 10 if x > 9 else int(x) for x in new_card_num])