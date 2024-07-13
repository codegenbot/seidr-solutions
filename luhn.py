def luhn(card):
    card = [int(x) for x in str(card)]
    double_even = False
    result = 0

    for i, n in enumerate(reversed(card)):
        if double_even:
            n *= 2
            if n > 9:
                n -= 9
        result += n
        double_even = not double_even

    return str(result)