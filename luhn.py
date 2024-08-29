```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    total_sum = 0
    for i, num in enumerate(card_num):
        if (i % 2 == 1 and len(str(num*2)) > 1):
            num *= 2
            num -= int(str(num)[0])*10 + int(str(num)[1])
        total_sum += num
    return total_sum