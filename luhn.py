Here is the Python solution:

def luhn(card):
    sum = 0
    for i, num in enumerate(reversed(str(card))):
        if (i % 2) == 1:
            num = str(int(num) * 2)
            if len(num) > 1:
                num = str((int(num[0]) + int(num[1])))
        sum += int(num)
    return sum