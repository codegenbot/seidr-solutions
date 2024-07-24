import re


def luhn(card_number):
    card_number = list(map(int, re.sub(r"\D+", "", str(card_number))))
    result = sum(sum(divmod(d * 2, 10)) + d for d in card_number[1::2]) + sum(
        card_number[::2]
    )
    return abs(result) % 10


card_numbers = [int(x) for x in input().split()]
print(luhn(card_numbers[0]))