````
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(sum(divmod(2*d if i%2 else d,10)) for d in card_number)
    return (result+1)%10 or 0
```