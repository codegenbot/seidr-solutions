card_numbers = list(map(int, filter(str.isdigit, input().split())))


def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = (
        sum(
            sum(divmod(d * 2, 10)) if i % 2 else d
            for i, d in enumerate(card_number[:-1], 1)
        )
        + card_number[-1]
    )
    return abs(result) % 10


print(luhn(card_numbers))