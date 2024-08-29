```Python
def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    sum = 0
    for i in range(len(card_num)):
        if (i+1) % 2 == 1:
            doubled = card_num[i] * 2
            if doubled > 9:
                doubled -= 9
            sum += doubled
        else:
            sum += card_num[i]
    return sum