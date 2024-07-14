def luhn(num):
    s = [int(x) for x in str(num)]
    res = sum(2 * x if i % 2 else x for i, x in enumerate(s))
    return (res // 10) * 10 + res % 10