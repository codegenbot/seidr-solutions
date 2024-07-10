def luhn(card):
    total = 0
    for i, num in enumerate(reversed(str(card))):
        if i % 2 == 1:
            num = str(int(num) * 2)
            if len(num) > 1:
                total += int(num[0]) + int(num[1])
            else:
                total += int(num)
        else:
            total += int(num)
    return total