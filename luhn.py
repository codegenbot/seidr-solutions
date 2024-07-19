def luhn(card):
    card = list(map(int, "".join(str(x) for x in str(card).replace(" ", "")).replace(" "," ")))
    result = sum(
        int(d) if i % 2 == 0 else int(d) * 2 if int(d) * 2 > 9 else int(d) * 2 - 9
        for i, d in enumerate(card)
    )
    return str(result)