def check(lst):
    result = double_the_difference(lst)
    if len(lst) > 5:
        result *= 2
    return str(result)

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0)