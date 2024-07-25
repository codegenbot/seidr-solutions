def luhn(card):
    card = [int(x) for x in str(card)]
    double_even = False
    total_sum = 0
    for i, num in enumerate(reversed(card)):
        if double_even:
            num *= 2
            if num > 9:
                num -= 9
        total_sum += num
        double_even = not double_even
    return total_sum