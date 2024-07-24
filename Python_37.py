def sort_even(l: list):
    even_numbers = sorted([x for x in l if 0 <= x % 2], key=abs)
    odd_numbers = sorted([x for x in l if 0 > x % 2], key=abs)
    return even_numbers + odd_numbers