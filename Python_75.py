def is_multiply_prime(a):
    prime_numbers = [
        2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
        31,
        37,
        41,
        43,
        47,
        53,
        59,
        61,
        67,
        71,
        73,
        79,
        83,
        89,
        97,
    ]
    for i in prime_numbers:
        for j in prime_numbers:
            for k in prime_numbers:
                if i * j * k == a:
                    return True
    return False