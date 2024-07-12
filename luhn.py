def luhn(card):
    card = [int(x) for x in str(card)]
    checksum = 0
    for i in range(len(card)):
        num = card[i]
        if (i % 2 != 0): 
            num = num * 2
            if (num > 9) : 
                num = num - 9
        checksum += num
    return checksum