```
def luhn(card):
    sum = 0
    for i in range(16, -1, -1):  
        if (i % 2 == 0 and int(str(card)[i]) * 2 > 9):
            sum += int(str(card)[i]) * 2 - 9
        elif i % 2 != 0:
            sum += int(str(card)[i])
    return str(sum).zfill(1)