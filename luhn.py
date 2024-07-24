def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    total = 0
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            total += num
        else:
            doubled_num = num * 2
            if doubled_num > 9:
                total += doubled_num - 9
            else:
                total += doubled_num
    return total