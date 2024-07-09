def luhn(card_num):
    card_num = list(map(int, card_num.split()))
    total = 0
    for i, num in enumerate(card_num):
        if i % 2 == 1:
            temp = num * 2
            if temp > 9:
                total += temp - 9
            else:
                total += temp
        else:
            total += num
    return str(total)