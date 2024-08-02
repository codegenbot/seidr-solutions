def double_the_difference(lst):
    return sum(
        i**2 for i in map(lambda x: x if isinstance(x, int) and x > 0 else None, lst)
    )