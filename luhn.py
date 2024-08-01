Here is the solution to the Luhn's algorithm problem:

```
def luhn(card_number):
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            temp = int(card_number[i]) * 2
            if temp > 9:
                temp -= 9
        else:
            temp = int(card_number[i])
        total += temp
    return total