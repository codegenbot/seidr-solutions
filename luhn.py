def luhn(num):
    num = list(map(int, str(num)))
    res = sum(2 * x if i % 2 else x for i, x in enumerate(num))
    return str(res % 10)