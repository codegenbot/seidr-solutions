def sort_even(l: list):
    even_numbers = [x for x in l if 0 <= x % 2]
    odd_numbers = [x for x in l if 0 > x % 2]
    return tuple(sorted(even_numbers, key=abs)) + tuple(sorted(odd_numbers, reverse=True))