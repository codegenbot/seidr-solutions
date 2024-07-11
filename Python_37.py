def sort_even(l: list):
    even_numbers = sorted([x for x in l if x % 2 == 0])
    odd_numbers = sorted([abs(x) for x in l if x % 2 != 0], key=lambda x: (x%2, x))
    return tuple(even_numbers + odd_numbers)