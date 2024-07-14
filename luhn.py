```
def luhn(card):
    sum = 0
    for i, n in enumerate(card):
        if i % 2 == 1:
            doubled_n = int(n) * 2
            sum += 9 if doubled_n > 9 else doubled_n
        else:
            sum += int(n)
    return sum