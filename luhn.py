```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    total = 0
    for i, num in enumerate(card_num[::-1]):
        if i % 2 == 0:
            total += num
        else:
            doubled = num * 2
            if doubled > 9:
                total += 1 + doubled % 10
            else:
                total += doubled
    return 100 - total if total % 10 != 0 else total