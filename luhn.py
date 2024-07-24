```
def luhn(card):
    card = [int(d) for d in str(card)]
    total_sum = 0
    for i, d in enumerate(card):
        if (i % 2 == 1 and d * 2 >= 10):
            total_sum += (d * 2) % 10 + 1
        elif i % 2 == 1:
            total_sum += d * 2 % 10
        else:
            total_sum += d
    return (total_sum) % 10