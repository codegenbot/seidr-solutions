def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:-1].split()]
    total = 0
    for i in range(len(card_num)):
        if i % 2 == 0:
            total += card_num[i]
        else:
            doubled = card_num[i] * 2
            total += doubled - 9 if doubled > 9 else doubled
    return str(total)