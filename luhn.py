```
def luhn(card_number):
    total = 0
    is_second = False
    for i in range(len(card_number) - 1, -1, -1):
        num = int(card_number[i])
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
        total += num
        is_second = not is_second
    return total