def double_the_difference(lst):
    return (
        sum(
            i**2
            for i in filter(lambda x: isinstance(x, int) and x >= 0 and x % 2 != 0, lst)
        )
        * 2
    )