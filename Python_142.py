```
def check(func):
    result = func([1, 2, 3])
    print(result)

def sum_squares(lst):
    total = 0
    for num in lst:
        if num % 4 == 0 and num % 6 != 0:
            total += num**2
        elif num % 12 == 0:
            total += num**3
        else:
            total += num**2
    return total

check(sum_squares)