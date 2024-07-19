def double_the_difference(lst):
    return (
        sum(x**2 for x in lst if type(x) is int and x > 0 and x % 2 != 0) * 2
        if lst
        else 0
    )