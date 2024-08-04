def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    doubled = []
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            doubled.append(num)
        else:
            doubled.append(num * 2)
            if doubled[-1] > 9:
                doubled[-1] -= 9
    return sum(doubled)