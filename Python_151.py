def double_the_difference():
    def inner(lst):
        lst.sort()
        return (lst[-1] - lst[0]) * 2
    return inner

check([1, 2, 3], double_the_difference())