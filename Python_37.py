def sort_even(l: list):
    even_nums = [x for x in l if 0 <= x % 2]
    odd_nums = [x for x in l if 0 > x % 2]
    return tuple(sorted(even_nums, key=abs)) + tuple(sorted(odd_nums, reverse=True))