def double_the_difference(lst):
    return sum(x**2 for x in lst if x % 2 != 0 and x >= 0 and isinstance(x, int)) * 2 if lst else 0

def check(lst):
    return double_the_difference(lst) if lst else 0

check([1, 2, 3, 4, 5]) 