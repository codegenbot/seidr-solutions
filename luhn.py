```
def luhn(card_number):
    total = 0
    for i, num in enumerate(card_number):
        if (i % 2) == 1:
            double_num = int(num) * 2
            if double_num > 9:
                total += (double_num // 10) + (double_num % 10)
            else:
                total += double_num
        else:
            total += int(num)
    return total