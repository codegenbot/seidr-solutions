def luhn(card_num):
    card_num = list(map(int, card_num.split()))
    res = sum(2 * d if i % 2 != 0 else d for i, d in enumerate(card_num))
    return str(
        sum(divmod(x, 10)[1])
        for x in filter(lambda x: x > 9, (res - 9) for _ in range(res))
    )