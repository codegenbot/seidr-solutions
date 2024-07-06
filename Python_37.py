def sort_even(l: list) -> tuple:
    non_integers = [x for x in l if not isinstance(x, int)]
    integers = sorted([x for x in l if isinstance(x, int)])

    even_numbers = [x for x in integers if x % 2 == 0]
    odd_numbers = [x for x in integers if x % 2 != 0]

    return tuple(non_integers + even_numbers + odd_numbers)