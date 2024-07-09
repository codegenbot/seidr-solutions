def luhn(num):
    num = [int(x) for x in str(num)[1:]]
    new_num = []
    for i, n in enumerate(num):
        if i % 2 == 0:
            n *= 2
            if n > 9:
                n -= 9
        new_num.append(n)
    return sum(new_num)