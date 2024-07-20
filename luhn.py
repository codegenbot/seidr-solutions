import re


def luhn(card_number):
    card = [int(x) for x in re.sub("[^0-9]", "", str(card_number))]

    if len(card) > 16:
        return sum(
            [
                sum(divisor * [int(i)] for i, divisor in zip(card, [2, 1][i % 2])) % 10
                or 9
                for i in range(15, -1, -1)
            ]
        )


card_number = input().strip()
if card_number.isdigit() and len(card_number) == 16:
    print(luhn(int(card_number)))
else:
    print("Invalid input: Card number should be 16 digits.")