````
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(sum(divmod(d * 2, 10)) + d for i, d in enumerate(card_number) if (i % 2 == 0 or not (d * 2 >= 10)))
    return result
```