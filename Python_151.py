def check(func):
    def inner(lst):
        evens = [x for x in lst if isinstance(x, int) and x % 2 == 0]
        odds = [x for x in lst if isinstance(x, int) and x % 2 != 0]
        even_sum_squares = sum(i**2 for i in evens)
        odd_sum = sum(odds)
        total_sum = sum(lst)
        diff = total_sum - odd_sum
        return func([evens, odds]) == (2 * diff)

    return inner


@check
def double_the_difference(lst):
    evens = [x for x in lst[0] if isinstance(x, int) and x >= 0]
    odds = [x for x in lst[1] if isinstance(x, int) and x >= 0]
    even_sum_squares = sum(i**2 for i in evens)
    odd_sum = sum(odds)
    total_sum = sum(lst[0]) + sum(lst[1])
    diff = total_sum - odd_sum
    return even_sum_squares == (2 * diff)