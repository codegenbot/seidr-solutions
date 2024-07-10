```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num).replace(" ", "")]
    total_sum = 0
    for i, num in enumerate(reversed(card_num)):
        if i % 2 == 1:
            doubled = num * 2
            if doubled > 9:
                total_sum += doubled - 9
            else:
                total_sum += doubled
        else:
            total_sum += num
    return total_sum