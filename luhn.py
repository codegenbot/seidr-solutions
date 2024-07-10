```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num).replace(" ", "").strip()]
    sum_val = 0
    alt = False
    for i, val in enumerate(card_num):
        if alt:
            val *= 2
            if val > 9:
                val -= 9
        sum_val += val
        alt = not alt
    return sum_val