def luhn(num):
    sum = 0
    for i in range(15, -1, -1):
        if i % 2 == 1:
            num[i] = int(str(int(num[i]) * 2))
            if num[i] > 9:
                num[i] -= 9
        sum += int(num[i])
    return sum