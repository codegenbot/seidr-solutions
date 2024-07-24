def luhn(card):
    card = list(map(int, str(card)))
    double = False
    result = 0
    for i in card:
        if double:
            i *= 2
            if i > 9:
                i -= 9
        double = not double
        result += i
    return result