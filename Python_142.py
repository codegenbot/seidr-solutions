```
def sum_squares(lst):
    total = 0
    for num in lst:
        if num % 2 == 0 and num % 3 != 0:
            total += num**2
        elif num % 4 == 0: 
            total += num**(num%2+1)
    return total