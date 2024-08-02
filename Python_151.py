def check(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) if lst else 0

check([2, 3, 4, 5]) == 34