```
def luhn(number):
    return sum(int(x) * 2 if i % 2 else int(x) for i, x in enumerate(str(number))) % 10 or 0