def sort_even(l: list):
    odd_numbers = [x for x in l if abs(x) % 2 != 0]
    even_numbers = sorted([abs(x) for x in l if abs(x) % 2 == 0], key=abs)
    return tuple(even_numbers + odd_numbers)