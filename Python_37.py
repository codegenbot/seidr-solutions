def sort_even(l: list):
    even_numbers = sorted([x for x in l if 0 <= x % 2], key=abs)
    odd_numbers = sorted([x for x in l if 0 > x % 2], key=lambda x: -abs(x))
    return tuple(even_numbers) + tuple(odd_numbers)