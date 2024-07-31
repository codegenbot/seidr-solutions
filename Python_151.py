def double_the_difference(lst):
    even_squares = sum(i ** 2 for i in [x for x in lst if isinstance(x, int) and x >= 0 and x % 2 != 0])
    diff = (max(lst) - min(lst)) if len(lst) > 1 else 0
    return 2 * even_squares - abs(diff)