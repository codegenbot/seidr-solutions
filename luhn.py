def luhn_check(cc_number):
    cc_number = list(map(int, cc_number))
    sum = 0
    for i in range(len(cc_number)):
        if (i % 2) == 1:
            cc_number[i] *= 2
            if cc_number[i] > 9:
                cc_number[i] -= 9
        sum += cc_number[i]
    return sum