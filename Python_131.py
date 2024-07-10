```
def digits(n):
    max_product = 1
    has_odd_factor = False
    while n:
        digit = n % 10
        if digit != 0 and digit % 2 != 0: 
            has_odd_factor = True
        elif has_odd_factor:
            return 0
        max_product *= digit
        n //= 10
    return max_product if max_product else 0