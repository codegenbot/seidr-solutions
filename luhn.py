Here is the solution:

def luhn(card):
    sum = 0
    for i in range(len(card)):
        if (i % 2) == 1:
            num = int(card[i]) * 2
            if num > 9:
                num -= 9
        else:
            num = int(card[i])
        sum += num
    return sum