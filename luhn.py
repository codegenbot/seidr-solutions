```
def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    total_sum = 0
    for i, n in enumerate(card):
        if i % 2 == 1:
            n *= 2
            if n > 9:
                n -= 9
        total_sum += n
    return (total_sum) % 10